/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbout_add;
    QAction *actionAbout_delete;
    QAction *actionAbout_edit;
    QAction *actionAbout_mark;
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTabWidget *tabWidget;
    QWidget *tab_4;
    QTableView *tableAll;
    QWidget *tab;
    QTableView *tableActive;
    QWidget *tab_2;
    QTableView *tableFailed;
    QWidget *tab_3;
    QTableView *tableComplited;
    QPushButton *pushButton_4;
    QMenuBar *menubar;
    QMenu *menuHelp;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(600, 400);
        MainWindow->setMinimumSize(QSize(600, 400));
        MainWindow->setMaximumSize(QSize(600, 400));
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        actionAbout_add = new QAction(MainWindow);
        actionAbout_add->setObjectName("actionAbout_add");
        actionAbout_delete = new QAction(MainWindow);
        actionAbout_delete->setObjectName("actionAbout_delete");
        actionAbout_edit = new QAction(MainWindow);
        actionAbout_edit->setObjectName("actionAbout_edit");
        actionAbout_mark = new QAction(MainWindow);
        actionAbout_mark->setObjectName("actionAbout_mark");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(510, 40, 60, 60));
        pushButton->setMinimumSize(QSize(60, 60));
        pushButton->setMaximumSize(QSize(60, 60));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("Background:rgb(40, 149, 34);Color:black;border-radius: 5px; border-style: outset;border-width: 2px;\n"
""));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(510, 120, 60, 60));
        pushButton_2->setMinimumSize(QSize(60, 60));
        pushButton_2->setMaximumSize(QSize(60, 60));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("Background:rgb(140, 19, 10);Color:black;border-radius: 5px; border-style: outset;border-width: 2px;"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(10, 10, 491, 341));
        tabWidget->setCursor(QCursor(Qt::ArrowCursor));
        tabWidget->setStyleSheet(QString::fromUtf8("border-radius: 2px; border-width: 1px;border-color:rgb(53, 83, 255); border-style: outset;"));
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        tableAll = new QTableView(tab_4);
        tableAll->setObjectName("tableAll");
        tableAll->setGeometry(QRect(0, 0, 481, 311));
        tabWidget->addTab(tab_4, QString());
        tab = new QWidget();
        tab->setObjectName("tab");
        tableActive = new QTableView(tab);
        tableActive->setObjectName("tableActive");
        tableActive->setGeometry(QRect(0, 0, 481, 311));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        tableFailed = new QTableView(tab_2);
        tableFailed->setObjectName("tableFailed");
        tableFailed->setGeometry(QRect(0, 0, 481, 311));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        tableComplited = new QTableView(tab_3);
        tableComplited->setObjectName("tableComplited");
        tableComplited->setGeometry(QRect(0, 0, 481, 311));
        tabWidget->addTab(tab_3, QString());
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(510, 200, 60, 60));
        pushButton_4->setMinimumSize(QSize(60, 60));
        pushButton_4->setMaximumSize(QSize(60, 60));
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_4->setStyleSheet(QString::fromUtf8("Background:rgb(181, 181, 28);Color:black;border-radius: 5px; border-style: outset;border-width: 2px;"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 600, 22));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName("menuHelp");
        menuHelp->setCursor(QCursor(Qt::PointingHandCursor));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuHelp->menuAction());
        menuHelp->addSeparator();
        menuHelp->addSeparator();
        menuHelp->addAction(actionAbout_add);
        menuHelp->addSeparator();
        menuHelp->addAction(actionAbout_delete);
        menuHelp->addSeparator();
        menuHelp->addAction(actionAbout_edit);
        menuHelp->addSeparator();
        menuHelp->addAction(actionAbout_mark);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "ToDo", nullptr));
        actionAbout_add->setText(QCoreApplication::translate("MainWindow", "About add", nullptr));
        actionAbout_delete->setText(QCoreApplication::translate("MainWindow", "About delete", nullptr));
        actionAbout_edit->setText(QCoreApplication::translate("MainWindow", "About edit", nullptr));
        actionAbout_mark->setText(QCoreApplication::translate("MainWindow", "About mark", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "All tasks", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Active tasks", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Failed tasks", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Complited tasks", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Mark", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
