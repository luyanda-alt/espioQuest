/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *hardButton;
    QPushButton *mediumButton;
    QPushButton *easyButton;
    QLabel *promptLabel;
    QPushButton *musicButton;
    QPushButton *soundButton;
    QLabel *label_2;
    QPushButton *quitBtn;
    QWidget *tab_2;
    QLabel *instructionImage;
    QTextBrowser *textBrowser;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1359, 979);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        QFont font;
        font.setFamilies({QString::fromUtf8("Dyuthi")});
        font.setPointSize(25);
        font.setItalic(false);
        tabWidget->setFont(font);
        tabWidget->setStyleSheet(QString::fromUtf8("background:green"));
        tab = new QWidget();
        tab->setObjectName("tab");
        hardButton = new QPushButton(tab);
        hardButton->setObjectName("hardButton");
        hardButton->setGeometry(QRect(30, 560, 231, 81));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Tlwg Typewriter")});
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setItalic(false);
        hardButton->setFont(font1);
        hardButton->setStyleSheet(QString::fromUtf8("background:orange"));
        mediumButton = new QPushButton(tab);
        mediumButton->setObjectName("mediumButton");
        mediumButton->setGeometry(QRect(30, 460, 231, 81));
        mediumButton->setFont(font1);
        mediumButton->setStyleSheet(QString::fromUtf8("background:orange"));
        easyButton = new QPushButton(tab);
        easyButton->setObjectName("easyButton");
        easyButton->setGeometry(QRect(30, 350, 231, 81));
        easyButton->setFont(font1);
        easyButton->setStyleSheet(QString::fromUtf8("background:orange"));
        promptLabel = new QLabel(tab);
        promptLabel->setObjectName("promptLabel");
        promptLabel->setGeometry(QRect(0, 250, 451, 91));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("FreeSerif")});
        font2.setPointSize(60);
        font2.setBold(true);
        font2.setItalic(true);
        promptLabel->setFont(font2);
        promptLabel->setStyleSheet(QString::fromUtf8("color:red"));
        promptLabel->setAlignment(Qt::AlignCenter);
        musicButton = new QPushButton(tab);
        musicButton->setObjectName("musicButton");
        musicButton->setGeometry(QRect(20, 90, 81, 51));
        musicButton->setStyleSheet(QString::fromUtf8("background:cyan"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/sounds/musical-note-symbol.ico"), QSize(), QIcon::Normal, QIcon::Off);
        musicButton->setIcon(icon);
        musicButton->setIconSize(QSize(50, 40));
        soundButton = new QPushButton(tab);
        soundButton->setObjectName("soundButton");
        soundButton->setGeometry(QRect(20, 20, 81, 51));
        soundButton->setStyleSheet(QString::fromUtf8("background:cyan"));
        QIcon icon1(QIcon::fromTheme(QString::fromUtf8("audio-volume-high")));
        soundButton->setIcon(icon1);
        soundButton->setIconSize(QSize(70, 60));
        label_2 = new QLabel(tab);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(190, 40, 791, 171));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/pictures/pictures/name.png")));
        quitBtn = new QPushButton(tab);
        quitBtn->setObjectName("quitBtn");
        quitBtn->setGeometry(QRect(1280, 10, 52, 56));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/sounds/power-button.ico"), QSize(), QIcon::Normal, QIcon::Off);
        quitBtn->setIcon(icon2);
        quitBtn->setIconSize(QSize(40, 50));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        instructionImage = new QLabel(tab_2);
        instructionImage->setObjectName("instructionImage");
        instructionImage->setGeometry(QRect(0, 0, 1021, 871));
        instructionImage->setPixmap(QPixmap(QString::fromUtf8(":/pictures/pictures/instructionImage.png")));
        textBrowser = new QTextBrowser(tab_2);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(70, 10, 1151, 861));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Z003")});
        font3.setPointSize(11);
        font3.setItalic(true);
        textBrowser->setFont(font3);
        textBrowser->setStyleSheet(QString::fromUtf8("background:transparent"));
        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1359, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        hardButton->setText(QCoreApplication::translate("MainWindow", "Hard", nullptr));
        mediumButton->setText(QCoreApplication::translate("MainWindow", "Medium", nullptr));
        easyButton->setText(QCoreApplication::translate("MainWindow", "Easy", nullptr));
        promptLabel->setText(QCoreApplication::translate("MainWindow", "Begin Quiz", nullptr));
        musicButton->setText(QString());
        soundButton->setText(QString());
        label_2->setText(QString());
        quitBtn->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Game", nullptr));
        instructionImage->setText(QString());
        textBrowser->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Z003'; font-size:11pt; font-weight:400; font-style:italic;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:20pt; font-weight:600; font-style:normal; text-decoration: underline; color:#ffffff;\">Instructions:</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:20pt; font-weight:600; font-style:norm"
                        "al; color:#ffffff;\">Welcome to Espioquest! Race against the clock as you answer 10 questions per level to uncover the secrets of Dunhaven Castle. Use your wits and speed to overcome challenges. Can you become the ultimate CipherMaster?</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:20pt; font-weight:600; font-style:normal; text-decoration: underline; color:#ffffff;\">Objective: </span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:20pt; font-weight:600; font-style:normal; color:#ffffff;\">Answer 10 questions per level while racing against the clock to unlock the secrets of the Emerald Cipher.</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-"
                        "block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:20pt; font-weight:600; font-style:normal; text-decoration: underline; color:#ffffff;\">Gameplay:</span></p>\n"
"<ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\">\n"
"<li style=\" font-family:'Ubuntu'; font-size:20pt; font-weight:600; font-style:normal; color:#ffffff;\" align=\"center\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Answer questions quickly and accurately to progress through levels.</li>\n"
"<li style=\" font-family:'Ubuntu'; font-size:20pt; font-weight:600; font-style:normal; color:#ffffff;\" align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Use hints strategically to overcome challenging<span style=\" color:#000000;\"> </span>puzzles.</li></ul>\n"
"<p align=\"center\" style=\" margin-top:12px; margin"
                        "-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:20pt; font-weight:600; font-style:normal; text-decoration: underline; color:#ffffff;\">Controls:</span></p>\n"
"<ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\">\n"
"<li style=\" font-family:'Ubuntu'; font-size:20pt; font-weight:600; font-style:normal; color:#ffffff;\" align=\"center\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Use your mouse or keyboard to select answers and interact with the game interface.</li>\n"
"<li style=\" font-family:'Ubuntu'; font-size:20pt; font-weight:600; font-style:normal; color:#ffffff;\" align=\"center\" style=\" margin-top:0px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Click on the hint button for assistance with questions or puzzles.</li></ul>\n"
"<p align=\"c"
                        "enter\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:20pt; font-weight:600; font-style:normal; text-decoration: underline; color:#ffffff;\">Scoring:</span></p>\n"
"<ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\">\n"
"<li style=\" font-family:'Ubuntu'; font-size:20pt; font-weight:600; font-style:normal; color:#ffffff;\" align=\"center\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Earn points for correct answers and bonus points for completing levels quickly.</li></ul>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:20pt; font-weight:600; font-style:normal; color:#ffffff;\">Good luck, Agent! The fate of the Emerald Ciph"
                        "er is in your hands!</span></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Instructions", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
