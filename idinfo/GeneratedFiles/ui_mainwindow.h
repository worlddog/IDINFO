/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QGroupBox *groupBox_3;
    QLabel *label_2;
    QLabel *label;
    QGroupBox *groupBox_2;
    QLineEdit *name_lineEdit;
    QLineEdit *sex_lineEdit;
    QLineEdit *mz_lineEdit;
    QLineEdit *date_lineEdit;
    QLineEdit *number_lineEdit;
    QTextEdit *add_textEdit;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QMenuBar *menuBar;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1136, 581);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(30, 20, 1071, 311));
        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(730, 30, 301, 251));
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 30, 241, 191));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 50, 621, 211));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(40, 340, 661, 171));
        name_lineEdit = new QLineEdit(groupBox_2);
        name_lineEdit->setObjectName(QStringLiteral("name_lineEdit"));
        name_lineEdit->setGeometry(QRect(80, 20, 113, 21));
        sex_lineEdit = new QLineEdit(groupBox_2);
        sex_lineEdit->setObjectName(QStringLiteral("sex_lineEdit"));
        sex_lineEdit->setGeometry(QRect(260, 20, 113, 21));
        mz_lineEdit = new QLineEdit(groupBox_2);
        mz_lineEdit->setObjectName(QStringLiteral("mz_lineEdit"));
        mz_lineEdit->setGeometry(QRect(450, 20, 113, 21));
        date_lineEdit = new QLineEdit(groupBox_2);
        date_lineEdit->setObjectName(QStringLiteral("date_lineEdit"));
        date_lineEdit->setGeometry(QRect(80, 50, 113, 21));
        number_lineEdit = new QLineEdit(groupBox_2);
        number_lineEdit->setObjectName(QStringLiteral("number_lineEdit"));
        number_lineEdit->setGeometry(QRect(320, 60, 321, 21));
        add_textEdit = new QTextEdit(groupBox_2);
        add_textEdit->setObjectName(QStringLiteral("add_textEdit"));
        add_textEdit->setGeometry(QRect(100, 90, 311, 51));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 20, 51, 21));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(200, 20, 51, 21));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(380, 20, 72, 16));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 50, 72, 15));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(220, 60, 72, 15));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 100, 72, 15));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(790, 340, 261, 71));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(950, 440, 141, 61));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(770, 430, 151, 81));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1136, 26));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());

        retranslateUi(MainWindow);
		QObject::connect(pushButton_2, SIGNAL(clicked()), MainWindow, SLOT(on_pushButton2_clicked()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "\345\233\276\345\203\217\351\242\204\350\247\210", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "\345\244\264\345\203\217", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\350\257\246\347\273\206\344\277\241\346\201\257", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\345\247\223\345\220\215", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "\346\200\247\345\210\253", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "\346\260\221\346\227\217", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "\345\207\272\347\224\237\346\227\245\346\234\237", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "\350\272\253\344\273\275\350\257\201\345\217\267", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "\345\256\266\345\272\255\344\275\217\345\235\200", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\345\233\276\345\203\217", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "\345\206\231\345\205\245", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "\350\257\206\345\210\253", Q_NULLPTR));
        menu->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
