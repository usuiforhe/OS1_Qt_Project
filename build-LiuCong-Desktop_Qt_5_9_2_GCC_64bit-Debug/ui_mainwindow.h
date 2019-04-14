/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_pid;
    QAction *action;
    QAction *action_2;
    QWidget *centralWidget;
    QLabel *Thread;
    QLabel *Mem_use;
    QLabel *Cpu_use;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *l1;
    QLabel *l2;
    QLabel *l3;
    QLabel *l4;
    QLabel *username;
    QLabel *version;
    QLabel *opentime;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menu;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(600, 496);
        action_pid = new QAction(MainWindow);
        action_pid->setObjectName(QStringLiteral("action_pid"));
        action = new QAction(MainWindow);
        action->setObjectName(QStringLiteral("action"));
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QStringLiteral("action_2"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Thread = new QLabel(centralWidget);
        Thread->setObjectName(QStringLiteral("Thread"));
        Thread->setGeometry(QRect(10, 410, 101, 21));
        Mem_use = new QLabel(centralWidget);
        Mem_use->setObjectName(QStringLiteral("Mem_use"));
        Mem_use->setGeometry(QRect(110, 410, 191, 21));
        Cpu_use = new QLabel(centralWidget);
        Cpu_use->setObjectName(QStringLiteral("Cpu_use"));
        Cpu_use->setGeometry(QRect(310, 410, 211, 21));
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(10, 30, 511, 341));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 509, 339));
        scrollArea->setWidget(scrollAreaWidgetContents);
        l1 = new QLabel(centralWidget);
        l1->setObjectName(QStringLiteral("l1"));
        l1->setGeometry(QRect(30, 10, 67, 17));
        l2 = new QLabel(centralWidget);
        l2->setObjectName(QStringLiteral("l2"));
        l2->setGeometry(QRect(150, 10, 67, 17));
        l3 = new QLabel(centralWidget);
        l3->setObjectName(QStringLiteral("l3"));
        l3->setGeometry(QRect(270, 10, 67, 17));
        l4 = new QLabel(centralWidget);
        l4->setObjectName(QStringLiteral("l4"));
        l4->setGeometry(QRect(410, 10, 67, 17));
        username = new QLabel(centralWidget);
        username->setObjectName(QStringLiteral("username"));
        username->setGeometry(QRect(10, 380, 111, 17));
        version = new QLabel(centralWidget);
        version->setObjectName(QStringLiteral("version"));
        version->setGeometry(QRect(130, 380, 191, 17));
        opentime = new QLabel(centralWidget);
        opentime->setObjectName(QStringLiteral("opentime"));
        opentime->setGeometry(QRect(260, 380, 251, 17));
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 28));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(action_pid);
        menu->addAction(action);
        menu->addAction(action_2);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        action_pid->setText(QApplication::translate("MainWindow", "\346\214\211pid\351\241\272\345\272\217\346\216\222\345\272\217", Q_NULLPTR));
        action->setText(QApplication::translate("MainWindow", "\346\214\211\345\206\205\345\255\230\345\215\240\347\224\250\346\216\222\345\272\217", Q_NULLPTR));
        action_2->setText(QApplication::translate("MainWindow", "\346\214\211\345\210\233\345\273\272\346\227\266\351\227\264\346\216\222\345\272\217", Q_NULLPTR));
        Thread->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        Mem_use->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        Cpu_use->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        l1->setText(QApplication::translate("MainWindow", "\345\220\215\347\247\260", Q_NULLPTR));
        l2->setText(QApplication::translate("MainWindow", "PID", Q_NULLPTR));
        l3->setText(QApplication::translate("MainWindow", "\345\215\240\347\224\250\345\206\205\345\255\230", Q_NULLPTR));
        l4->setText(QApplication::translate("MainWindow", "\345\210\233\345\273\272\346\227\266\351\227\264", Q_NULLPTR));
        username->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        version->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        opentime->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        menu->setTitle(QApplication::translate("MainWindow", "\347\263\273\347\273\237\346\246\202\345\206\265", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
