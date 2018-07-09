/********************************************************************************
** Form generated from reading UI file 'serialpport.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERIALPPORT_H
#define UI_SERIALPPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_serialPport
{
public:
    QWidget *centralWidget;
    QTextEdit *textEdit;
    QTextBrowser *textBrowser;
    QPushButton *pushButton_send;
    QPushButton *rightButton;
    QPushButton *leftButton;
    QPushButton *resetButton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBox_sn;
    QPushButton *pushButton_ref;
    QPushButton *pushButton_open;
    QPushButton *pushButton_close;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QPushButton *upButton;
    QPushButton *rotateButton_f;
    QPushButton *rotateButton_b;
    QPushButton *downButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *serialPport)
    {
        if (serialPport->objectName().isEmpty())
            serialPport->setObjectName(QStringLiteral("serialPport"));
        serialPport->resize(562, 360);
        centralWidget = new QWidget(serialPport);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(9, 144, 269, 72));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(9, 38, 269, 71));
        pushButton_send = new QPushButton(centralWidget);
        pushButton_send->setObjectName(QStringLiteral("pushButton_send"));
        pushButton_send->setGeometry(QRect(9, 222, 75, 23));
        rightButton = new QPushButton(centralWidget);
        rightButton->setObjectName(QStringLiteral("rightButton"));
        rightButton->setGeometry(QRect(440, 100, 75, 23));
        leftButton = new QPushButton(centralWidget);
        leftButton->setObjectName(QStringLiteral("leftButton"));
        leftButton->setGeometry(QRect(280, 100, 75, 23));
        resetButton = new QPushButton(centralWidget);
        resetButton->setObjectName(QStringLiteral("resetButton"));
        resetButton->setGeometry(QRect(440, 160, 75, 23));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(9, 9, 314, 25));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        comboBox_sn = new QComboBox(widget);
        comboBox_sn->setObjectName(QStringLiteral("comboBox_sn"));

        horizontalLayout->addWidget(comboBox_sn);

        pushButton_ref = new QPushButton(widget);
        pushButton_ref->setObjectName(QStringLiteral("pushButton_ref"));
        pushButton_ref->setStyleSheet(QStringLiteral(""));

        horizontalLayout->addWidget(pushButton_ref);

        pushButton_open = new QPushButton(widget);
        pushButton_open->setObjectName(QStringLiteral("pushButton_open"));
        pushButton_open->setStyleSheet(QStringLiteral(""));

        horizontalLayout->addWidget(pushButton_open);

        pushButton_close = new QPushButton(widget);
        pushButton_close->setObjectName(QStringLiteral("pushButton_close"));

        horizontalLayout->addWidget(pushButton_close);

        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(360, 57, 77, 112));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        upButton = new QPushButton(widget1);
        upButton->setObjectName(QStringLiteral("upButton"));

        verticalLayout->addWidget(upButton);

        rotateButton_f = new QPushButton(widget1);
        rotateButton_f->setObjectName(QStringLiteral("rotateButton_f"));

        verticalLayout->addWidget(rotateButton_f);

        rotateButton_b = new QPushButton(widget1);
        rotateButton_b->setObjectName(QStringLiteral("rotateButton_b"));

        verticalLayout->addWidget(rotateButton_b);

        downButton = new QPushButton(widget1);
        downButton->setObjectName(QStringLiteral("downButton"));

        verticalLayout->addWidget(downButton);

        serialPport->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(serialPport);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 562, 23));
        serialPport->setMenuBar(menuBar);
        mainToolBar = new QToolBar(serialPport);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        serialPport->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(serialPport);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        serialPport->setStatusBar(statusBar);

        retranslateUi(serialPport);

        QMetaObject::connectSlotsByName(serialPport);
    } // setupUi

    void retranslateUi(QMainWindow *serialPport)
    {
        serialPport->setWindowTitle(QApplication::translate("serialPport", "serialPport", 0));
        pushButton_send->setText(QApplication::translate("serialPport", "\345\217\221\351\200\201", 0));
        rightButton->setText(QApplication::translate("serialPport", "right", 0));
        leftButton->setText(QApplication::translate("serialPport", "left", 0));
        resetButton->setText(QApplication::translate("serialPport", "reset", 0));
        pushButton_ref->setText(QApplication::translate("serialPport", "\345\210\267\346\226\260\347\253\257\345\217\243", 0));
        pushButton_open->setText(QApplication::translate("serialPport", "\346\211\223\345\274\200\347\253\257\345\217\243", 0));
        pushButton_close->setText(QApplication::translate("serialPport", "\345\205\263\351\227\255\347\253\257\345\217\243", 0));
        upButton->setText(QApplication::translate("serialPport", "up", 0));
        rotateButton_f->setText(QApplication::translate("serialPport", "rotate_fo", 0));
        rotateButton_b->setText(QApplication::translate("serialPport", "rotate_ba", 0));
        downButton->setText(QApplication::translate("serialPport", "down", 0));
    } // retranslateUi

};

namespace Ui {
    class serialPport: public Ui_serialPport {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIALPPORT_H
