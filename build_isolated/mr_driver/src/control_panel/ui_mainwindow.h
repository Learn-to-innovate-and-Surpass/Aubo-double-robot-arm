/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox_3;
    QLabel *lb_joint5;
    QPushButton *pbn_joint4Left;
    QLabel *lb_joint2;
    QPushButton *pbn_joint6Left;
    QPushButton *pbn_joint2Left;
    QLabel *lb_joint3;
    QPushButton *pbn_joint4Right;
    QPushButton *pbn_joint1Right;
    QLabel *lb_joint6;
    QPushButton *pbn_joint6Right;
    QPushButton *pbn_joint3Left;
    QLabel *lb_joint4;
    QPushButton *pbn_joint2Right;
    QPushButton *pbn_joint5Right;
    QPushButton *pbn_joint1Left;
    QLabel *lb_joint1;
    QPushButton *pbn_joint5Left;
    QPushButton *pbn_joint3Right;
    QLabel *label_7;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_13;
    QLabel *label_15;
    QLabel *label_17;
    QPushButton *pbn_joint7Left;
    QPushButton *pbn_joint7Right;
    QLabel *label_18;
    QLabel *lb_joint7;
    QPushButton *pbn_joint7Right_2;
    QLabel *label;
    QPushButton *pbn_gripperOpen;
    QPushButton *pbn_gripperClose;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(564, 598);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(40, 60, 471, 361));
        groupBox_3->setStyleSheet(QStringLiteral(""));
        lb_joint5 = new QLabel(groupBox_3);
        lb_joint5->setObjectName(QStringLiteral("lb_joint5"));
        lb_joint5->setGeometry(QRect(200, 192, 191, 26));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lb_joint5->sizePolicy().hasHeightForWidth());
        lb_joint5->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(14);
        lb_joint5->setFont(font);
        lb_joint5->setStyleSheet(QLatin1String("background-color: rgb(96, 96, 96);\n"
"color: white;"));
        lb_joint5->setAlignment(Qt::AlignCenter);
        pbn_joint4Left = new QPushButton(groupBox_3);
        pbn_joint4Left->setObjectName(QStringLiteral("pbn_joint4Left"));
        pbn_joint4Left->setGeometry(QRect(140, 150, 60, 30));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pbn_joint4Left->sizePolicy().hasHeightForWidth());
        pbn_joint4Left->setSizePolicy(sizePolicy1);
        pbn_joint4Left->setFocusPolicy(Qt::NoFocus);
        pbn_joint4Left->setStyleSheet(QLatin1String("background-color: qlineargradient( x1:0, y1:0, x2:1, y2:0, stop:0 #F9F9F9, stop:0.4  #E9E9E9, stop:0.7 #D9D9D9, stop:1 #C9C9C9);\n"
"font: bold 18pt \"Ubuntu\";\n"
"border: 1px solid rgb(128, 128, 128);\n"
"border-radius: 4px;"));
        pbn_joint4Left->setAutoRepeat(true);
        lb_joint2 = new QLabel(groupBox_3);
        lb_joint2->setObjectName(QStringLiteral("lb_joint2"));
        lb_joint2->setGeometry(QRect(200, 72, 191, 26));
        sizePolicy.setHeightForWidth(lb_joint2->sizePolicy().hasHeightForWidth());
        lb_joint2->setSizePolicy(sizePolicy);
        lb_joint2->setFont(font);
        lb_joint2->setStyleSheet(QLatin1String("background-color: rgb(96, 96, 96);\n"
"color: white;"));
        lb_joint2->setAlignment(Qt::AlignCenter);
        pbn_joint6Left = new QPushButton(groupBox_3);
        pbn_joint6Left->setObjectName(QStringLiteral("pbn_joint6Left"));
        pbn_joint6Left->setGeometry(QRect(140, 230, 60, 30));
        sizePolicy1.setHeightForWidth(pbn_joint6Left->sizePolicy().hasHeightForWidth());
        pbn_joint6Left->setSizePolicy(sizePolicy1);
        pbn_joint6Left->setFocusPolicy(Qt::NoFocus);
        pbn_joint6Left->setStyleSheet(QLatin1String("background-color: qlineargradient( x1:0, y1:0, x2:1, y2:0, stop:0 #F9F9F9, stop:0.4  #E9E9E9, stop:0.7 #D9D9D9, stop:1 #C9C9C9);\n"
"font: bold 18pt \"Ubuntu\";\n"
"border: 1px solid rgb(128, 128, 128);\n"
"border-radius: 4px;"));
        pbn_joint6Left->setAutoRepeat(true);
        pbn_joint2Left = new QPushButton(groupBox_3);
        pbn_joint2Left->setObjectName(QStringLiteral("pbn_joint2Left"));
        pbn_joint2Left->setGeometry(QRect(140, 70, 60, 30));
        sizePolicy1.setHeightForWidth(pbn_joint2Left->sizePolicy().hasHeightForWidth());
        pbn_joint2Left->setSizePolicy(sizePolicy1);
        pbn_joint2Left->setFocusPolicy(Qt::NoFocus);
        pbn_joint2Left->setStyleSheet(QLatin1String("background-color: qlineargradient( x1:0, y1:0, x2:1, y2:0, stop:0 #F9F9F9, stop:0.4  #E9E9E9, stop:0.7 #D9D9D9, stop:1 #C9C9C9);\n"
"font: bold 18pt \"Ubuntu\";\n"
"border: 1px solid rgb(128, 128, 128);\n"
"border-radius: 4px;"));
        pbn_joint2Left->setAutoRepeat(true);
        lb_joint3 = new QLabel(groupBox_3);
        lb_joint3->setObjectName(QStringLiteral("lb_joint3"));
        lb_joint3->setGeometry(QRect(200, 112, 191, 26));
        sizePolicy.setHeightForWidth(lb_joint3->sizePolicy().hasHeightForWidth());
        lb_joint3->setSizePolicy(sizePolicy);
        lb_joint3->setFont(font);
        lb_joint3->setStyleSheet(QLatin1String("background-color: rgb(96, 96, 96);\n"
"color: white;"));
        lb_joint3->setAlignment(Qt::AlignCenter);
        pbn_joint4Right = new QPushButton(groupBox_3);
        pbn_joint4Right->setObjectName(QStringLiteral("pbn_joint4Right"));
        pbn_joint4Right->setGeometry(QRect(390, 150, 60, 30));
        sizePolicy1.setHeightForWidth(pbn_joint4Right->sizePolicy().hasHeightForWidth());
        pbn_joint4Right->setSizePolicy(sizePolicy1);
        pbn_joint4Right->setFocusPolicy(Qt::NoFocus);
        pbn_joint4Right->setStyleSheet(QLatin1String("background-color: qlineargradient( x1:0, y1:0, x2:1, y2:0, stop:0 #F9F9F9, stop:0.4  #E9E9E9, stop:0.7 #D9D9D9, stop:1 #C9C9C9);\n"
"font: bold 18pt \"Ubuntu\";\n"
"border: 1px solid rgb(128, 128, 128);\n"
"border-radius: 4px;"));
        pbn_joint4Right->setAutoRepeat(true);
        pbn_joint1Right = new QPushButton(groupBox_3);
        pbn_joint1Right->setObjectName(QStringLiteral("pbn_joint1Right"));
        pbn_joint1Right->setGeometry(QRect(390, 30, 60, 30));
        sizePolicy1.setHeightForWidth(pbn_joint1Right->sizePolicy().hasHeightForWidth());
        pbn_joint1Right->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamily(QStringLiteral("Ubuntu"));
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        pbn_joint1Right->setFont(font1);
        pbn_joint1Right->setFocusPolicy(Qt::NoFocus);
        pbn_joint1Right->setStyleSheet(QLatin1String("background-color: qlineargradient( x1:0, y1:0, x2:1, y2:0, stop:0 #F9F9F9, stop:0.4  #E9E9E9, stop:0.7 #D9D9D9, stop:1 #C9C9C9);\n"
"font: bold 18pt \"Ubuntu\";\n"
"border: 1px solid rgb(128, 128, 128);\n"
"border-radius: 4px;"));
        pbn_joint1Right->setAutoRepeat(true);
        lb_joint6 = new QLabel(groupBox_3);
        lb_joint6->setObjectName(QStringLiteral("lb_joint6"));
        lb_joint6->setGeometry(QRect(200, 232, 191, 26));
        sizePolicy.setHeightForWidth(lb_joint6->sizePolicy().hasHeightForWidth());
        lb_joint6->setSizePolicy(sizePolicy);
        lb_joint6->setFont(font);
        lb_joint6->setStyleSheet(QLatin1String("background-color: rgb(96, 96, 96);\n"
"color: white;"));
        lb_joint6->setAlignment(Qt::AlignCenter);
        pbn_joint6Right = new QPushButton(groupBox_3);
        pbn_joint6Right->setObjectName(QStringLiteral("pbn_joint6Right"));
        pbn_joint6Right->setGeometry(QRect(390, 230, 60, 31));
        sizePolicy1.setHeightForWidth(pbn_joint6Right->sizePolicy().hasHeightForWidth());
        pbn_joint6Right->setSizePolicy(sizePolicy1);
        pbn_joint6Right->setFocusPolicy(Qt::NoFocus);
        pbn_joint6Right->setStyleSheet(QLatin1String("background-color: qlineargradient( x1:0, y1:0, x2:1, y2:0, stop:0 #F9F9F9, stop:0.4  #E9E9E9, stop:0.7 #D9D9D9, stop:1 #C9C9C9);\n"
"font: bold 18pt \"Ubuntu\";\n"
"border: 1px solid rgb(128, 128, 128);\n"
"border-radius: 4px;"));
        pbn_joint6Right->setAutoRepeat(true);
        pbn_joint3Left = new QPushButton(groupBox_3);
        pbn_joint3Left->setObjectName(QStringLiteral("pbn_joint3Left"));
        pbn_joint3Left->setGeometry(QRect(140, 110, 60, 30));
        sizePolicy1.setHeightForWidth(pbn_joint3Left->sizePolicy().hasHeightForWidth());
        pbn_joint3Left->setSizePolicy(sizePolicy1);
        pbn_joint3Left->setFocusPolicy(Qt::NoFocus);
        pbn_joint3Left->setStyleSheet(QLatin1String("background-color: qlineargradient( x1:0, y1:0, x2:1, y2:0, stop:0 #F9F9F9, stop:0.4  #E9E9E9, stop:0.7 #D9D9D9, stop:1 #C9C9C9);\n"
"font: bold 18pt \"Ubuntu\";\n"
"border: 1px solid rgb(128, 128, 128);\n"
"border-radius: 4px;"));
        pbn_joint3Left->setAutoRepeat(true);
        lb_joint4 = new QLabel(groupBox_3);
        lb_joint4->setObjectName(QStringLiteral("lb_joint4"));
        lb_joint4->setGeometry(QRect(200, 152, 191, 26));
        sizePolicy.setHeightForWidth(lb_joint4->sizePolicy().hasHeightForWidth());
        lb_joint4->setSizePolicy(sizePolicy);
        lb_joint4->setFont(font);
        lb_joint4->setStyleSheet(QLatin1String("background-color: rgb(96, 96, 96);\n"
"color: white;"));
        lb_joint4->setAlignment(Qt::AlignCenter);
        pbn_joint2Right = new QPushButton(groupBox_3);
        pbn_joint2Right->setObjectName(QStringLiteral("pbn_joint2Right"));
        pbn_joint2Right->setGeometry(QRect(390, 70, 60, 30));
        sizePolicy1.setHeightForWidth(pbn_joint2Right->sizePolicy().hasHeightForWidth());
        pbn_joint2Right->setSizePolicy(sizePolicy1);
        pbn_joint2Right->setFocusPolicy(Qt::NoFocus);
        pbn_joint2Right->setStyleSheet(QLatin1String("background-color: qlineargradient( x1:0, y1:0, x2:1, y2:0, stop:0 #F9F9F9, stop:0.4  #E9E9E9, stop:0.7 #D9D9D9, stop:1 #C9C9C9);\n"
"font: bold 18pt \"Ubuntu\";\n"
"border: 1px solid rgb(128, 128, 128);\n"
"border-radius: 4px;"));
        pbn_joint2Right->setAutoRepeat(true);
        pbn_joint5Right = new QPushButton(groupBox_3);
        pbn_joint5Right->setObjectName(QStringLiteral("pbn_joint5Right"));
        pbn_joint5Right->setGeometry(QRect(390, 190, 60, 30));
        sizePolicy1.setHeightForWidth(pbn_joint5Right->sizePolicy().hasHeightForWidth());
        pbn_joint5Right->setSizePolicy(sizePolicy1);
        pbn_joint5Right->setFocusPolicy(Qt::NoFocus);
        pbn_joint5Right->setStyleSheet(QLatin1String("background-color: qlineargradient( x1:0, y1:0, x2:1, y2:0, stop:0 #F9F9F9, stop:0.4  #E9E9E9, stop:0.7 #D9D9D9, stop:1 #C9C9C9);\n"
"font: bold 18pt \"Ubuntu\";\n"
"border: 1px solid rgb(128, 128, 128);\n"
"border-radius: 4px;"));
        pbn_joint5Right->setAutoRepeat(true);
        pbn_joint1Left = new QPushButton(groupBox_3);
        pbn_joint1Left->setObjectName(QStringLiteral("pbn_joint1Left"));
        pbn_joint1Left->setGeometry(QRect(140, 30, 60, 30));
        sizePolicy1.setHeightForWidth(pbn_joint1Left->sizePolicy().hasHeightForWidth());
        pbn_joint1Left->setSizePolicy(sizePolicy1);
        pbn_joint1Left->setFont(font1);
        pbn_joint1Left->setFocusPolicy(Qt::NoFocus);
        pbn_joint1Left->setStyleSheet(QLatin1String("background-color: qlineargradient( x1:0, y1:0, x2:1, y2:0, stop:0 #F9F9F9, stop:0.4  #E9E9E9, stop:0.7 #D9D9D9, stop:1 #C9C9C9);\n"
"font: bold 18pt \"Ubuntu\";\n"
"border: 1px solid rgb(128, 128, 128);\n"
"border-radius: 4px;"));
        pbn_joint1Left->setAutoRepeat(true);
        lb_joint1 = new QLabel(groupBox_3);
        lb_joint1->setObjectName(QStringLiteral("lb_joint1"));
        lb_joint1->setGeometry(QRect(200, 32, 191, 26));
        sizePolicy.setHeightForWidth(lb_joint1->sizePolicy().hasHeightForWidth());
        lb_joint1->setSizePolicy(sizePolicy);
        lb_joint1->setFont(font);
        lb_joint1->setStyleSheet(QLatin1String("background-color: rgb(96, 96, 96);\n"
"color: white;"));
        lb_joint1->setAlignment(Qt::AlignCenter);
        pbn_joint5Left = new QPushButton(groupBox_3);
        pbn_joint5Left->setObjectName(QStringLiteral("pbn_joint5Left"));
        pbn_joint5Left->setGeometry(QRect(140, 190, 60, 30));
        sizePolicy1.setHeightForWidth(pbn_joint5Left->sizePolicy().hasHeightForWidth());
        pbn_joint5Left->setSizePolicy(sizePolicy1);
        pbn_joint5Left->setFocusPolicy(Qt::NoFocus);
        pbn_joint5Left->setStyleSheet(QLatin1String("background-color: qlineargradient( x1:0, y1:0, x2:1, y2:0, stop:0 #F9F9F9, stop:0.4  #E9E9E9, stop:0.7 #D9D9D9, stop:1 #C9C9C9);\n"
"font: bold 18pt \"Ubuntu\";\n"
"border: 1px solid rgb(128, 128, 128);\n"
"border-radius: 4px;"));
        pbn_joint5Left->setAutoRepeat(true);
        pbn_joint3Right = new QPushButton(groupBox_3);
        pbn_joint3Right->setObjectName(QStringLiteral("pbn_joint3Right"));
        pbn_joint3Right->setGeometry(QRect(390, 110, 60, 30));
        sizePolicy1.setHeightForWidth(pbn_joint3Right->sizePolicy().hasHeightForWidth());
        pbn_joint3Right->setSizePolicy(sizePolicy1);
        pbn_joint3Right->setFocusPolicy(Qt::NoFocus);
        pbn_joint3Right->setStyleSheet(QLatin1String("background-color: qlineargradient( x1:0, y1:0, x2:1, y2:0, stop:0 #F9F9F9, stop:0.4  #E9E9E9, stop:0.7 #D9D9D9, stop:1 #C9C9C9);\n"
"font: bold 18pt \"Ubuntu\";\n"
"border: 1px solid rgb(128, 128, 128);\n"
"border-radius: 4px;"));
        pbn_joint3Right->setAutoRepeat(true);
        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 30, 101, 30));
        QFont font2;
        font2.setPointSize(12);
        label_7->setFont(font2);
        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(20, 70, 101, 30));
        label_10->setFont(font2);
        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(20, 110, 101, 30));
        label_11->setFont(font2);
        label_13 = new QLabel(groupBox_3);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(20, 150, 101, 30));
        label_13->setFont(font2);
        label_15 = new QLabel(groupBox_3);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(20, 190, 101, 30));
        label_15->setFont(font2);
        label_17 = new QLabel(groupBox_3);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(20, 230, 101, 30));
        label_17->setFont(font2);
        pbn_joint7Left = new QPushButton(groupBox_3);
        pbn_joint7Left->setObjectName(QStringLiteral("pbn_joint7Left"));
        pbn_joint7Left->setGeometry(QRect(140, 270, 60, 30));
        sizePolicy1.setHeightForWidth(pbn_joint7Left->sizePolicy().hasHeightForWidth());
        pbn_joint7Left->setSizePolicy(sizePolicy1);
        pbn_joint7Left->setFocusPolicy(Qt::NoFocus);
        pbn_joint7Left->setStyleSheet(QLatin1String("background-color: qlineargradient( x1:0, y1:0, x2:1, y2:0, stop:0 #F9F9F9, stop:0.4  #E9E9E9, stop:0.7 #D9D9D9, stop:1 #C9C9C9);\n"
"font: bold 18pt \"Ubuntu\";\n"
"border: 1px solid rgb(128, 128, 128);\n"
"border-radius: 4px;"));
        pbn_joint7Left->setAutoRepeat(true);
        pbn_joint7Right = new QPushButton(groupBox_3);
        pbn_joint7Right->setObjectName(QStringLiteral("pbn_joint7Right"));
        pbn_joint7Right->setGeometry(QRect(390, 270, 60, 31));
        sizePolicy1.setHeightForWidth(pbn_joint7Right->sizePolicy().hasHeightForWidth());
        pbn_joint7Right->setSizePolicy(sizePolicy1);
        pbn_joint7Right->setFocusPolicy(Qt::NoFocus);
        pbn_joint7Right->setStyleSheet(QLatin1String("background-color: qlineargradient( x1:0, y1:0, x2:1, y2:0, stop:0 #F9F9F9, stop:0.4  #E9E9E9, stop:0.7 #D9D9D9, stop:1 #C9C9C9);\n"
"font: bold 18pt \"Ubuntu\";\n"
"border: 1px solid rgb(128, 128, 128);\n"
"border-radius: 4px;"));
        pbn_joint7Right->setAutoRepeat(true);
        label_18 = new QLabel(groupBox_3);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(20, 270, 101, 30));
        label_18->setFont(font2);
        lb_joint7 = new QLabel(groupBox_3);
        lb_joint7->setObjectName(QStringLiteral("lb_joint7"));
        lb_joint7->setGeometry(QRect(200, 272, 191, 26));
        sizePolicy.setHeightForWidth(lb_joint7->sizePolicy().hasHeightForWidth());
        lb_joint7->setSizePolicy(sizePolicy);
        lb_joint7->setFont(font);
        lb_joint7->setStyleSheet(QLatin1String("background-color: rgb(96, 96, 96);\n"
"color: white;"));
        lb_joint7->setAlignment(Qt::AlignCenter);
        pbn_joint7Right_2 = new QPushButton(groupBox_3);
        pbn_joint7Right_2->setObjectName(QStringLiteral("pbn_joint7Right_2"));
        pbn_joint7Right_2->setGeometry(QRect(190, 310, 211, 41));
        sizePolicy1.setHeightForWidth(pbn_joint7Right_2->sizePolicy().hasHeightForWidth());
        pbn_joint7Right_2->setSizePolicy(sizePolicy1);
        pbn_joint7Right_2->setFocusPolicy(Qt::NoFocus);
        pbn_joint7Right_2->setStyleSheet(QLatin1String("background-color: qlineargradient( x1:0, y1:0, x2:1, y2:0, stop:0 #F9F9F9, stop:0.4  #E9E9E9, stop:0.7 #D9D9D9, stop:1 #C9C9C9);\n"
"font: bold 18pt \"Ubuntu\";\n"
"border: 1px solid rgb(128, 128, 128);\n"
"border-radius: 4px;"));
        pbn_joint7Right_2->setAutoRepeat(true);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 10, 311, 41));
        QFont font3;
        font3.setBold(true);
        font3.setWeight(75);
        label->setFont(font3);
        pbn_gripperOpen = new QPushButton(centralWidget);
        pbn_gripperOpen->setObjectName(QStringLiteral("pbn_gripperOpen"));
        pbn_gripperOpen->setGeometry(QRect(130, 460, 80, 22));
        pbn_gripperClose = new QPushButton(centralWidget);
        pbn_gripperClose->setObjectName(QStringLiteral("pbn_gripperClose"));
        pbn_gripperClose->setGeometry(QRect(220, 460, 80, 22));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 564, 19));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Control Panel", 0));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Joint Control                                              unit(deg.)", 0));
        lb_joint5->setText(QApplication::translate("MainWindow", "0.0000", 0));
        pbn_joint4Left->setText(QApplication::translate("MainWindow", "-", 0));
        lb_joint2->setText(QApplication::translate("MainWindow", "0.0000", 0));
        pbn_joint6Left->setText(QApplication::translate("MainWindow", "-", 0));
        pbn_joint2Left->setText(QApplication::translate("MainWindow", "-", 0));
        lb_joint3->setText(QApplication::translate("MainWindow", "0.0000", 0));
        pbn_joint4Right->setText(QApplication::translate("MainWindow", "+", 0));
        pbn_joint1Right->setText(QApplication::translate("MainWindow", "+", 0));
        lb_joint6->setText(QApplication::translate("MainWindow", "0.0000", 0));
        pbn_joint6Right->setText(QApplication::translate("MainWindow", "+", 0));
        pbn_joint3Left->setText(QApplication::translate("MainWindow", "-", 0));
        lb_joint4->setText(QApplication::translate("MainWindow", "0.0000", 0));
        pbn_joint2Right->setText(QApplication::translate("MainWindow", "+", 0));
        pbn_joint5Right->setText(QApplication::translate("MainWindow", "+", 0));
        pbn_joint1Left->setText(QApplication::translate("MainWindow", "-", 0));
        lb_joint1->setText(QApplication::translate("MainWindow", "0.0000", 0));
        pbn_joint5Left->setText(QApplication::translate("MainWindow", "-", 0));
        pbn_joint3Right->setText(QApplication::translate("MainWindow", "+", 0));
        label_7->setText(QApplication::translate("MainWindow", "Joint 1:", 0));
        label_10->setText(QApplication::translate("MainWindow", "Joint 2:", 0));
        label_11->setText(QApplication::translate("MainWindow", "Joint 3:", 0));
        label_13->setText(QApplication::translate("MainWindow", "Joint 4:", 0));
        label_15->setText(QApplication::translate("MainWindow", "Joint 5:", 0));
        label_17->setText(QApplication::translate("MainWindow", "Joint 6:", 0));
        pbn_joint7Left->setText(QApplication::translate("MainWindow", "-", 0));
        pbn_joint7Right->setText(QApplication::translate("MainWindow", "+", 0));
        label_18->setText(QApplication::translate("MainWindow", "Joint 7:", 0));
        lb_joint7->setText(QApplication::translate("MainWindow", "0.0000", 0));
        pbn_joint7Right_2->setText(QApplication::translate("MainWindow", "press to set zero", 0));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ff0000;\">Warning: Pay attention to Self Collision</span></p></body></html>", 0));
        pbn_gripperOpen->setText(QApplication::translate("MainWindow", "Open", 0));
        pbn_gripperClose->setText(QApplication::translate("MainWindow", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
