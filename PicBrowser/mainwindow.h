#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QAction>
#include <QMenu>
#include <QLabel>
#include <QScrollArea>
#include <QResizeEvent>
#include <QTimer>
#include <QMutex>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void keyPressEvent(QKeyEvent *);
    void resizeEvent(QResizeEvent *);

private:
    Ui::MainWindow *ui;
    QAction* openFolderAct;
    QMenu* fileMenu;
    QString curFolderPath;
    QStringList fileFilterList;
    QStringList filePathList;

    QLabel* imageLabel;
    QScrollArea* scrollArea;

    qint32 curShowPicIdx;
    qint32 maxWindowHeigth;
    qint32 maxWindowWidth;

    QMap<QString, QImage> imgCacheMap;

    QTimer* timer;
    QMutex lock;

    bool isSelfResize;

    QString cfgFilePath;

    void createActions();
    void createMenus();
    void setFileFilter();
    void delFile(QString filePath);
    void loadLastCfg(void);
    void saveCurCfg(void);


    void checkPicIndx();
    qint32 getImgCache(QString& imgPath, QImage& imageInfo);
    qint32 findInFileList(QStringList filePathList, const QString& imgPath);

public slots:
    void openFolderSlot();
    void reloadFileListSlot();
    void prevShowSlot();
    void nextShowSlot();
    void timerSlot();
    void freshImgShow();
    void checkPicCache();

};

#endif // MAINWINDOW_H
