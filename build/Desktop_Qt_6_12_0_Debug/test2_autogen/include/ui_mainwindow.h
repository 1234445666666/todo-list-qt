/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QListWidget *listWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1017, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");

        verticalLayout->addWidget(lineEdit);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");

        verticalLayout->addWidget(pushButton_4);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");

        verticalLayout->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout->addWidget(pushButton_2);

        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName("listWidget");
        listWidget->setStyleSheet(QString::fromUtf8("/* \320\235\320\260\321\201\321\202\321\200\320\260\320\270\320\262\320\260\320\265\320\274 \320\263\320\273\320\260\320\262\320\275\320\276\320\265 \320\276\320\272\320\275\320\276 */\n"
"QMainWindow {\n"
"    background-color: #1e1e24; /* \320\242\320\265\320\274\320\275\321\213\320\271 \320\272\321\200\320\260\321\201\320\270\320\262\321\213\320\271 \321\204\320\276\320\275 */\n"
"}\n"
"\n"
"/* \320\235\320\260\321\201\321\202\321\200\320\260\320\270\320\262\320\260\320\265\320\274 \321\202\320\265\320\272\321\201\321\202\320\276\320\262\320\276\320\265 \320\277\320\276\320\273\320\265 (\320\230\320\275\320\277\321\203\321\202) */\n"
"QLineEdit {\n"
"    background-color: #2a2a32;\n"
"    color: #ffffff;\n"
"    border: 1px solid #4e4e5a;\n"
"    border-radius: 6px;\n"
"    padding: 8px;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"/* \320\235\320\260\321\201\321\202\321\200\320\260\320\270\320\262\320\260\320\265\320\274 \321\201\320\277\320\270\321\201\320\276\320\272 \320\267\320\260\320\264\320\260\321\207 *"
                        "/\n"
"QListWidget {\n"
"    background-color: #2a2a32;\n"
"    color: #ffffff;\n"
"    border: 1px solid #4e4e5a;\n"
"    border-radius: 6px;\n"
"    padding: 5px;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"/* \320\235\320\260\321\201\321\202\321\200\320\260\320\270\320\262\320\260\320\265\320\274 \321\215\320\273\320\265\320\274\320\265\320\275\321\202\321\213 \321\201\320\277\320\270\321\201\320\272\320\260 \320\277\321\200\320\270 \320\262\321\213\320\264\320\265\320\273\320\265\320\275\320\270\320\270 */\n"
"QListWidget::item:selected {\n"
"    background-color: #007acc; /* \320\232\321\200\320\260\321\201\320\270\320\262\320\276\320\265 \321\201\320\270\320\275\320\265\320\265 \320\262\321\213\320\264\320\265\320\273\320\265\320\275\320\270\320\265 \320\262\320\274\320\265\321\201\321\202\320\276 \320\267\320\265\320\273\320\265\320\275\320\276\320\263\320\276 */\n"
"    color: white;\n"
"}\n"
"\n"
"/* \320\235\320\260\321\201\321\202\321\200\320\260\320\270\320\262\320\260\320\265\320\274 \320\222\320\241\320"
                        "\225 \320\272\320\275\320\276\320\277\320\272\320\270 \321\201\321\200\320\260\320\267\321\203 */\n"
"QPushButton {\n"
"    background-color: #007acc;\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 6px;\n"
"    padding: 8px 15px;\n"
"    font-size: 13px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"/* \320\255\321\204\321\204\320\265\320\272\321\202 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 \320\274\321\213\321\210\320\272\320\270 \320\275\320\260 \320\272\320\275\320\276\320\277\320\272\321\203 */\n"
"QPushButton:hover {\n"
"    background-color: #0098ff;\n"
"}\n"
"\n"
"/* \320\255\321\204\321\204\320\265\320\272\321\202 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 \320\275\320\260 \320\272\320\275\320\276\320\277\320\272\321\203 */\n"
"QPushButton:pressed {\n"
"    background-color: #005999;\n"
"}\n"
""));

        verticalLayout->addWidget(listWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1017, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        lineEdit->setText(QString());
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\264\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\267\320\260\320\264\320\260\321\207\321\203", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "\320\270\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \321\202\320\265\320\272\321\201\321\202 \320\267\320\260\320\264\320\260\321\207\320\270", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\321\203\320\264\320\260\320\273\320\270\321\202\321\214 \320\262\321\213\320\264\320\265\320\273\320\265\320\275\320\275\321\203\321\216 \321\217\321\207\320\265\320\271\320\272\321\203", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\320\276\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
