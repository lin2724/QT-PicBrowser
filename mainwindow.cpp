#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QWidget>
#include <QLayout>
#include <QFileDialog>
#include <QAbstractButton>
#include <QDir>
#include <QMessageBox>
#include <QKeyEvent>
#include <Qt>
#include <QScreen>
#include <QDebug>
#include <QIODevice>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    curShowPicIdx(0),maxWindowHeigth(480),maxWindowWidth(480)
{
    ui->setupUi(this);
    //QHBoxLayout* main_layer = new QHBoxLayout(this);
    //QFileDialog* file_dialog = new QFileDialog(this);

    //file_dialog->setFileMode(QFileDialog::Directory);
    //main_layer->addWidget(file_dialog);
    //this->setLayout(main_layer);

    cfgFilePath = "pic_browser.cfg";
    imageLabel = new QLabel(this);
    imageLabel->setBackgroundRole(QPalette::Base);
    imageLabel->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
    imageLabel->setScaledContents(true);
    
    scrollArea = new QScrollArea;
    scrollArea->setBackgroundRole(QPalette::Dark);
    scrollArea->setWidget(imageLabel);
    setCentralWidget(scrollArea);

    QScreen *screenInfo = QGuiApplication::primaryScreen();
    QSize screenSize = screenInfo->availableSize();
    maxWindowHeigth = screenSize.height();
    maxWindowWidth = screenSize.width();

    timer = new QTimer(this);
    timer->setInterval(3);
    connect(timer, SIGNAL(timeout()), this, SLOT(timerSlot()));
    timer->start();

    setFileFilter();
    createActions();
    createMenus();

    loadLastCfg();

    //connect(folder_open_button, clicked, file_dialog, open);
}
void MainWindow::createActions()
//! [17] //! [18]
{
    openFolderAct = new QAction(tr("&Open..."), this);
    openFolderAct->setShortcut(tr("Ctrl+O"));
    connect(openFolderAct, SIGNAL(triggered()), this, SLOT(openFolderSlot()));
}

void MainWindow::createMenus()
//! [19] //! [20]
{
    fileMenu = new QMenu(tr("&File"), this);
    fileMenu->addAction(openFolderAct);
    menuBar()->addMenu(fileMenu);
}

void MainWindow::openFolderSlot()
{
    qDebug()<<"open FolderSlot";
    QFileDialog fileDialog(this, Qt::Widget);
    fileDialog.setAccessibleDescription(QString("Select folder"));
    fileDialog.setFileMode(QFileDialog::Directory);
    if (!curFolderPath.isEmpty())
    {
        fileDialog.setDirectory(curFolderPath);
    }
    fileDialog.exec();
    QStringList	selectFolders = fileDialog.selectedFiles();
    if (!selectFolders.isEmpty())
    {
        qDebug()<<"Select " << selectFolders.back();
        QString oldFolderPath = curFolderPath;
        curFolderPath = selectFolders.back();
        reloadFileListSlot();
    }
    saveCurCfg();

}

void MainWindow::setFileFilter()
{
    fileFilterList << "*.jpg" << "*.jpeg" << "*.png" <<"*.gif"\
                   << "*.JPG" << "*.JPEG" << "*.PNG";
}

void MainWindow::reloadFileListSlot()
{
    QDir dirRoot = QDir(curFolderPath);
    QFileInfoList fileInfos;
    fileInfos = dirRoot.entryInfoList(fileFilterList);
    filePathList.clear();
    while(!fileInfos.isEmpty())
    {
        qDebug() << fileInfos.front().fileName();
        filePathList.append(fileInfos.front().filePath());
        fileInfos.pop_front();
    }
    freshImgShow();
}

void MainWindow::checkPicIndx()
{
    if (curShowPicIdx >= filePathList.count())
    {
        curShowPicIdx = filePathList.count() - 1;
    }
    else if (curShowPicIdx<0)
    {
        curShowPicIdx = 0;
    }
}

void MainWindow::prevShowSlot()
{
    curShowPicIdx -= 1;
    checkPicIndx();
    freshImgShow();
}
void MainWindow::nextShowSlot()
{
    curShowPicIdx += 1;
    checkPicIndx();
    freshImgShow();
    //checkPicCache();
}

void MainWindow::timerSlot()
{
    //qDebug() << "timer slot";
    checkPicCache();
}

void MainWindow::freshImgShow()
{
    QSize newWindowSize;

    isSelfResize = true;
    if (filePathList.isEmpty())
    {
        qDebug() << "Empty img list";
        return;
    }
    QImage imgInfo;
    if (0 != getImgCache(filePathList[curShowPicIdx], imgInfo))
    {
        imgInfo.load(filePathList[curShowPicIdx]);
    }
    else
    {
        qDebug() << "Load from chache " << filePathList[curShowPicIdx];
    }

    //QImage image(filePathList[curShowPicIdx]);
    if (imgInfo.isNull()) {
        imageLabel->adjustSize();
        qDebug() << "img is null " << filePathList[curShowPicIdx];
        return;
    }
    qDebug() << "set img  " << filePathList[curShowPicIdx];
    imageLabel->setPixmap(QPixmap::fromImage(imgInfo));
    qint32 tmpWindowHeigth = imgInfo.height()*maxWindowWidth/imgInfo.width();
    if (tmpWindowHeigth <= maxWindowHeigth)
    {
        newWindowSize.setWidth(maxWindowWidth);
        newWindowSize.setHeight(tmpWindowHeigth);
        //this->setFixedHeight(tmpWindowHeigth);
    }
    else
    {
        qint32 tmpWindowWidth = imgInfo.width()*maxWindowHeigth/imgInfo.height();
        newWindowSize.setWidth(tmpWindowWidth);
        newWindowSize.setHeight(maxWindowHeigth);
    }
    //this->setSizeIncrement();
    this->setBaseSize(newWindowSize);
    imageLabel->adjustSize();
    scrollArea->setWidgetResizable(true);

    //isSelfResize = false;
}

void MainWindow::delFile(QString filePath)
{
    if (filePath.isEmpty() && filePathList.count() !=0 )
    {
        qDebug() << "Delete Current";
        QFile file(filePathList[curShowPicIdx]);
        qDebug() << "Delete " << filePathList[curShowPicIdx];
        file.remove();
        file.close();
    }
}

void MainWindow::keyPressEvent(QKeyEvent *e)
{
    qDebug() << "Key event";
    if (e->key() == Qt::Key_K)
    {
        qDebug() << "key k next";
        nextShowSlot();
    }
    else if (e->key() == Qt::Key_J)
    {
        qDebug() << "key j prev";
        prevShowSlot();
    }
    else if(e->key() == 16777219 || e->key() == Qt::Key_Delete)
    {
        qDebug() << "delete";
        delFile(QString(""));
        reloadFileListSlot();
        checkPicIndx();
        freshImgShow();
    }
    else
    {
        qDebug() << "unknow key " << e->key();

    }
}

void MainWindow::resizeEvent(QResizeEvent* e)
{
    if (isSelfResize)
    {
        qDebug() << "Pass resize event";
        isSelfResize = false;
        return;
    }

    //QSize newSize = e->size();
    //maxWindowHeigth = newSize.height();
    //maxWindowWidth = newSize.width();
    qDebug() << "Resize Event";
}

void MainWindow::checkPicCache()
{
    QList< QString > needCacheFiles;
    qint32 curIdx = curShowPicIdx;
    qint32 cacheCnt = 0;
    if (0 == filePathList.count())
    {
        return;
    }
    for(curIdx=curShowPicIdx, cacheCnt=0; curIdx >=0; curIdx--, cacheCnt++)
    {
        needCacheFiles.append(filePathList[curIdx]);
        //qDebug() << "need cache " << filePathList[curIdx];
        if (cacheCnt >= 3)
        {
            break;
        }
    }
    for(curIdx=curShowPicIdx+1, cacheCnt=0; curIdx < filePathList.count(); curIdx++, cacheCnt++)
    {
        needCacheFiles.append(filePathList[curIdx]);
        if (cacheCnt >= 6)
        {
            break;
        }
        //qDebug() << "need cache " << filePathList[curIdx];
    }

    QImage tmpImgInfo;
    for (QList < QString >::iterator it=needCacheFiles.begin(); it!=needCacheFiles.end(); it++)
    {
        if (0 != getImgCache(*it, tmpImgInfo))
        {
            tmpImgInfo = QImage(*it);
            imgCacheMap[*it] = tmpImgInfo;
            qDebug() << "add cache " << *it;
        }
        else
        {
            //qDebug() << "alread have cache " << *it;
        }
    }
    QStringList removeList;
    for (auto it=imgCacheMap.begin(); it != imgCacheMap.end(); it++)
    {
        if (0 != findInFileList(needCacheFiles, it.key()))
        {
            qDebug() << "remove cache " << it.key();
            removeList.append(it.key());
        }
    }
    for (auto it=removeList.begin(); it!= removeList.end(); it++)
    {
        imgCacheMap.remove(*it);
    }

}

qint32 MainWindow::getImgCache(QString& imgPath, QImage& imageInfo)
{
    if (imgCacheMap.find(imgPath) != imgCacheMap.end())
    {
        imageInfo = *imgCacheMap.find(imgPath);
        //qDebug() << "Find in cache " << imgPath;
        return 0;
    }
    else
    {
        return -1;
    }

    return -1;
}

qint32 MainWindow::findInFileList(QStringList filePathList, const QString& imgPath)
{
    //QString::iterator it;
    for (auto it = filePathList.begin(); it != filePathList.end(); it++)
    {
        if (imgPath == *it)
        {
            return 0;
        }
    }
    return -1;
}

void MainWindow::loadLastCfg(void)
{
    QFile cfgFile(cfgFilePath);
    if (cfgFile.exists())
    {
        qDebug() << "Cfg file exists";
        cfgFile.open(QIODevice::ReadOnly);
        curFolderPath = QString(cfgFile.readLine(512));
        cfgFile.close();
    }
    else
    {
        qDebug() << "Cfg file not exists";
        cfgFile.open(QIODevice::WriteOnly);
        cfgFile.write(curFolderPath.toUtf8());
        cfgFile.close();
    }
}

void MainWindow::saveCurCfg()
{
    QFile cfgFile(cfgFilePath);
    cfgFile.open(QIODevice::WriteOnly|QIODevice::Truncate);
    cfgFile.write(curFolderPath.toUtf8());
    cfgFile.close();
}

MainWindow::~MainWindow()
{
    delete ui;
}
