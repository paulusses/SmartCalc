/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow {
public:
  QWidget *centralwidget;
  QLabel *result;
  QPushButton *pushButton_mult;
  QPushButton *pushButton_div;
  QPushButton *pushButton_mod;
  QPushButton *pushButton_log;
  QPushButton *pushButton_sin;
  QPushButton *pushButton_2;
  QPushButton *pushButton_1;
  QPushButton *pushButton_3;
  QPushButton *pushButton_cos;
  QPushButton *pushButton_5;
  QPushButton *pushButton_4;
  QPushButton *pushButton_6;
  QPushButton *pushButton_tan;
  QPushButton *pushButton_8;
  QPushButton *pushButton_7;
  QPushButton *pushButton_9;
  QPushButton *pushButton_sqrt;
  QPushButton *pushButton_0;
  QPushButton *pushButton_X;
  QPushButton *pushButton_pow;
  QPushButton *pushButton_atan;
  QPushButton *pushButton_ln;
  QPushButton *pushButton_acos;
  QPushButton *pushButton_asin;
  QPushButton *pushButton_leftS;
  QPushButton *pushButton_Go;
  QPushButton *pushButton_minus;
  QPushButton *pushButton_plus;
  QPushButton *pushButton_RightS;
  QPushButton *pushButton_clean;
  QLabel *label;
  QPushButton *pushButton_point;

  void setupUi(QMainWindow *MainWindow) {
    if (MainWindow->objectName().isEmpty())
      MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
    MainWindow->resize(379, 418);
    centralwidget = new QWidget(MainWindow);
    centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
    result = new QLabel(centralwidget);
    result->setObjectName(QString::fromUtf8("result"));
    result->setGeometry(QRect(0, 0, 291, 61));
    result->setStyleSheet(QString::fromUtf8(
        "QLabel {\n"
        "	qproperty-alignment: 'AlignVCenter | AlignRight';\n"
        "	border-bottom: 1px solid gray;\n"
        "	background-color: white;\n"
        "}\n"
        ""));
    pushButton_mult = new QPushButton(centralwidget);
    pushButton_mult->setObjectName(QString::fromUtf8("pushButton_mult"));
    pushButton_mult->setGeometry(QRect(0, 60, 71, 61));
    pushButton_mult->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "  background-color: rgb(215, 215, 215);\n"
        "  border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #BEBEBE, stop: 1 "
        "#D7D7D7);\n"
        "}"));
    pushButton_div = new QPushButton(centralwidget);
    pushButton_div->setObjectName(QString::fromUtf8("pushButton_div"));
    pushButton_div->setGeometry(QRect(70, 60, 71, 61));
    pushButton_div->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "  background-color: rgb(215, 215, 215);\n"
        "  border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #BEBEBE, stop: 1 "
        "#D7D7D7);\n"
        "}"));
    pushButton_mod = new QPushButton(centralwidget);
    pushButton_mod->setObjectName(QString::fromUtf8("pushButton_mod"));
    pushButton_mod->setGeometry(QRect(210, 300, 101, 61));
    pushButton_mod->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "  background-color: rgb(255, 151, 57);\n"
        "  color: white; \n"
        "  border: 1px solid gray;\n"
        "}\n"
        "\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #FF7832, stop: 1 "
        "#FF9739);\n"
        "}"));
    pushButton_log = new QPushButton(centralwidget);
    pushButton_log->setObjectName(QString::fromUtf8("pushButton_log"));
    pushButton_log->setGeometry(QRect(210, 60, 101, 61));
    pushButton_log->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "  background-color: rgb(255, 151, 57);\n"
        "  color: white; \n"
        "  border: 1px solid gray;\n"
        "}\n"
        "\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #FF7832, stop: 1 "
        "#FF9739);\n"
        "}"));
    pushButton_sin = new QPushButton(centralwidget);
    pushButton_sin->setObjectName(QString::fromUtf8("pushButton_sin"));
    pushButton_sin->setGeometry(QRect(210, 120, 101, 61));
    pushButton_sin->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "  background-color: rgb(255, 151, 57);\n"
        "  color: white; \n"
        "  border: 1px solid gray;\n"
        "}\n"
        "\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #FF7832, stop: 1 "
        "#FF9739);\n"
        "}"));
    pushButton_2 = new QPushButton(centralwidget);
    pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
    pushButton_2->setGeometry(QRect(70, 120, 71, 61));
    pushButton_2->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "   border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #dadbde, stop: 1 "
        "#f6f7fa);\n"
        "}"));
    pushButton_1 = new QPushButton(centralwidget);
    pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
    pushButton_1->setGeometry(QRect(0, 120, 71, 61));
    pushButton_1->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "   border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #dadbde, stop: 1 "
        "#f6f7fa);\n"
        "}"));
    pushButton_3 = new QPushButton(centralwidget);
    pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
    pushButton_3->setGeometry(QRect(140, 120, 71, 61));
    pushButton_3->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "   border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #dadbde, stop: 1 "
        "#f6f7fa);\n"
        "}"));
    pushButton_cos = new QPushButton(centralwidget);
    pushButton_cos->setObjectName(QString::fromUtf8("pushButton_cos"));
    pushButton_cos->setGeometry(QRect(210, 180, 101, 61));
    pushButton_cos->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "  background-color: rgb(255, 151, 57);\n"
        "  color: white; \n"
        "  border: 1px solid gray;\n"
        "}\n"
        "\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #FF7832, stop: 1 "
        "#FF9739);\n"
        "}"));
    pushButton_5 = new QPushButton(centralwidget);
    pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
    pushButton_5->setGeometry(QRect(70, 180, 71, 61));
    pushButton_5->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "   border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #dadbde, stop: 1 "
        "#f6f7fa);\n"
        "}"));
    pushButton_4 = new QPushButton(centralwidget);
    pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
    pushButton_4->setGeometry(QRect(0, 180, 71, 61));
    pushButton_4->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "   border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #dadbde, stop: 1 "
        "#f6f7fa);\n"
        "}"));
    pushButton_6 = new QPushButton(centralwidget);
    pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
    pushButton_6->setGeometry(QRect(140, 180, 71, 61));
    pushButton_6->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "   border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #dadbde, stop: 1 "
        "#f6f7fa);\n"
        "}"));
    pushButton_tan = new QPushButton(centralwidget);
    pushButton_tan->setObjectName(QString::fromUtf8("pushButton_tan"));
    pushButton_tan->setGeometry(QRect(210, 240, 101, 61));
    pushButton_tan->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "  background-color: rgb(255, 151, 57);\n"
        "  color: white; \n"
        "  border: 1px solid gray;\n"
        "}\n"
        "\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #FF7832, stop: 1 "
        "#FF9739);\n"
        "}"));
    pushButton_8 = new QPushButton(centralwidget);
    pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
    pushButton_8->setGeometry(QRect(70, 240, 71, 61));
    pushButton_8->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "   border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #dadbde, stop: 1 "
        "#f6f7fa);\n"
        "}"));
    pushButton_7 = new QPushButton(centralwidget);
    pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
    pushButton_7->setGeometry(QRect(0, 240, 71, 61));
    pushButton_7->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "   border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #dadbde, stop: 1 "
        "#f6f7fa);\n"
        "}"));
    pushButton_9 = new QPushButton(centralwidget);
    pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
    pushButton_9->setGeometry(QRect(140, 240, 71, 61));
    pushButton_9->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "   border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #dadbde, stop: 1 "
        "#f6f7fa);\n"
        "}"));
    pushButton_sqrt = new QPushButton(centralwidget);
    pushButton_sqrt->setObjectName(QString::fromUtf8("pushButton_sqrt"));
    pushButton_sqrt->setGeometry(QRect(310, 300, 71, 61));
    pushButton_sqrt->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "  background-color: rgb(255, 151, 57);\n"
        "  color: white; \n"
        "  border: 1px solid gray;\n"
        "}\n"
        "\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #FF7832, stop: 1 "
        "#FF9739);\n"
        "}"));
    pushButton_0 = new QPushButton(centralwidget);
    pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
    pushButton_0->setGeometry(QRect(0, 300, 101, 61));
    pushButton_0->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "   border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #dadbde, stop: 1 "
        "#f6f7fa);\n"
        "}"));
    pushButton_X = new QPushButton(centralwidget);
    pushButton_X->setObjectName(QString::fromUtf8("pushButton_X"));
    pushButton_X->setGeometry(QRect(150, 300, 61, 61));
    pushButton_X->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "   border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #dadbde, stop: 1 "
        "#f6f7fa);\n"
        "}"));
    pushButton_pow = new QPushButton(centralwidget);
    pushButton_pow->setObjectName(QString::fromUtf8("pushButton_pow"));
    pushButton_pow->setGeometry(QRect(140, 60, 71, 61));
    pushButton_pow->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "  background-color: rgb(215, 215, 215);\n"
        "  border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #BEBEBE, stop: 1 "
        "#D7D7D7);\n"
        "}"));
    pushButton_atan = new QPushButton(centralwidget);
    pushButton_atan->setObjectName(QString::fromUtf8("pushButton_atan"));
    pushButton_atan->setGeometry(QRect(310, 240, 71, 61));
    pushButton_atan->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "  background-color: rgb(255, 151, 57);\n"
        "  color: white; \n"
        "  border: 1px solid gray;\n"
        "}\n"
        "\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #FF7832, stop: 1 "
        "#FF9739);\n"
        "}"));
    pushButton_ln = new QPushButton(centralwidget);
    pushButton_ln->setObjectName(QString::fromUtf8("pushButton_ln"));
    pushButton_ln->setGeometry(QRect(310, 60, 71, 61));
    pushButton_ln->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "  background-color: rgb(255, 151, 57);\n"
        "  color: white; \n"
        "  border: 1px solid gray;\n"
        "}\n"
        "\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #FF7832, stop: 1 "
        "#FF9739);\n"
        "}"));
    pushButton_acos = new QPushButton(centralwidget);
    pushButton_acos->setObjectName(QString::fromUtf8("pushButton_acos"));
    pushButton_acos->setGeometry(QRect(310, 180, 71, 61));
    pushButton_acos->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "  background-color: rgb(255, 151, 57);\n"
        "  color: white; \n"
        "  border: 1px solid gray;\n"
        "}\n"
        "\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #FF7832, stop: 1 "
        "#FF9739);\n"
        "}"));
    pushButton_asin = new QPushButton(centralwidget);
    pushButton_asin->setObjectName(QString::fromUtf8("pushButton_asin"));
    pushButton_asin->setGeometry(QRect(310, 120, 71, 61));
    pushButton_asin->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "  background-color: rgb(255, 151, 57);\n"
        "  color: white; \n"
        "  border: 1px solid gray;\n"
        "}\n"
        "\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #FF7832, stop: 1 "
        "#FF9739);\n"
        "}"));
    pushButton_leftS = new QPushButton(centralwidget);
    pushButton_leftS->setObjectName(QString::fromUtf8("pushButton_leftS"));
    pushButton_leftS->setGeometry(QRect(0, 360, 71, 61));
    pushButton_leftS->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "   border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #dadbde, stop: 1 "
        "#f6f7fa);\n"
        "}"));
    pushButton_Go = new QPushButton(centralwidget);
    pushButton_Go->setObjectName(QString::fromUtf8("pushButton_Go"));
    pushButton_Go->setGeometry(QRect(280, 360, 101, 61));
    pushButton_minus = new QPushButton(centralwidget);
    pushButton_minus->setObjectName(QString::fromUtf8("pushButton_minus"));
    pushButton_minus->setGeometry(QRect(210, 360, 71, 61));
    pushButton_minus->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "  background-color: rgb(215, 215, 215);\n"
        "  border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #BEBEBE, stop: 1 "
        "#D7D7D7);\n"
        "}"));
    pushButton_plus = new QPushButton(centralwidget);
    pushButton_plus->setObjectName(QString::fromUtf8("pushButton_plus"));
    pushButton_plus->setGeometry(QRect(140, 360, 71, 61));
    pushButton_plus->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "  background-color: rgb(215, 215, 215);\n"
        "  border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #BEBEBE, stop: 1 "
        "#D7D7D7);\n"
        "}"));
    pushButton_RightS = new QPushButton(centralwidget);
    pushButton_RightS->setObjectName(QString::fromUtf8("pushButton_RightS"));
    pushButton_RightS->setGeometry(QRect(70, 360, 71, 61));
    pushButton_RightS->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "   border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #dadbde, stop: 1 "
        "#f6f7fa);\n"
        "}"));
    pushButton_clean = new QPushButton(centralwidget);
    pushButton_clean->setObjectName(QString::fromUtf8("pushButton_clean"));
    pushButton_clean->setGeometry(QRect(310, 0, 71, 61));
    label = new QLabel(centralwidget);
    label->setObjectName(QString::fromUtf8("label"));
    label->setGeometry(QRect(290, -10, 20, 71));
    label->setStyleSheet(
        QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
                          "border-bottom: 1px solid gray;"));
    pushButton_point = new QPushButton(centralwidget);
    pushButton_point->setObjectName(QString::fromUtf8("pushButton_point"));
    pushButton_point->setGeometry(QRect(100, 300, 51, 61));
    pushButton_point->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "   border: 1px solid gray;\n"
        "}\n"
        "QPushButton:pressed {\n"
        "    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
        "                                      stop: 0 #dadbde, stop: 1 "
        "#f6f7fa);\n"
        "}"));
    MainWindow->setCentralWidget(centralwidget);

    retranslateUi(MainWindow);

    QMetaObject::connectSlotsByName(MainWindow);
  } // setupUi

  void retranslateUi(QMainWindow *MainWindow) {
    MainWindow->setWindowTitle(
        QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
    result->setText(QString());
    pushButton_mult->setText(
        QCoreApplication::translate("MainWindow", "*", nullptr));
    pushButton_div->setText(
        QCoreApplication::translate("MainWindow", "\303\267", nullptr));
    pushButton_mod->setText(
        QCoreApplication::translate("MainWindow", "mod", nullptr));
    pushButton_log->setText(
        QCoreApplication::translate("MainWindow", "log", nullptr));
    pushButton_sin->setText(
        QCoreApplication::translate("MainWindow", "sin", nullptr));
    pushButton_2->setText(
        QCoreApplication::translate("MainWindow", "2", nullptr));
    pushButton_1->setText(
        QCoreApplication::translate("MainWindow", "1", nullptr));
    pushButton_3->setText(
        QCoreApplication::translate("MainWindow", "3", nullptr));
    pushButton_cos->setText(
        QCoreApplication::translate("MainWindow", "cos", nullptr));
    pushButton_5->setText(
        QCoreApplication::translate("MainWindow", "5", nullptr));
    pushButton_4->setText(
        QCoreApplication::translate("MainWindow", "4", nullptr));
    pushButton_6->setText(
        QCoreApplication::translate("MainWindow", "6", nullptr));
    pushButton_tan->setText(
        QCoreApplication::translate("MainWindow", "tan", nullptr));
    pushButton_8->setText(
        QCoreApplication::translate("MainWindow", "8", nullptr));
    pushButton_7->setText(
        QCoreApplication::translate("MainWindow", "7", nullptr));
    pushButton_9->setText(
        QCoreApplication::translate("MainWindow", "9", nullptr));
    pushButton_sqrt->setText(
        QCoreApplication::translate("MainWindow", "sqrt", nullptr));
    pushButton_0->setText(
        QCoreApplication::translate("MainWindow", "0", nullptr));
    pushButton_X->setText(
        QCoreApplication::translate("MainWindow", "X", nullptr));
    pushButton_pow->setText(
        QCoreApplication::translate("MainWindow", "^", nullptr));
    pushButton_atan->setText(
        QCoreApplication::translate("MainWindow", "atan", nullptr));
    pushButton_ln->setText(
        QCoreApplication::translate("MainWindow", "ln", nullptr));
    pushButton_acos->setText(
        QCoreApplication::translate("MainWindow", "acos", nullptr));
    pushButton_asin->setText(
        QCoreApplication::translate("MainWindow", "asin", nullptr));
    pushButton_leftS->setText(
        QCoreApplication::translate("MainWindow", "(", nullptr));
    pushButton_Go->setText(
        QCoreApplication::translate("MainWindow", "=", nullptr));
    pushButton_minus->setText(
        QCoreApplication::translate("MainWindow", "-", nullptr));
    pushButton_plus->setText(
        QCoreApplication::translate("MainWindow", "+", nullptr));
    pushButton_RightS->setText(
        QCoreApplication::translate("MainWindow", ")", nullptr));
    pushButton_clean->setText(
        QCoreApplication::translate("MainWindow", "AC", nullptr));
    label->setText(QString());
    pushButton_point->setText(
        QCoreApplication::translate("MainWindow", ".", nullptr));
  } // retranslateUi
};

namespace Ui {
class MainWindow : public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
