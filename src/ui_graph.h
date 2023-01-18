/********************************************************************************
** Form generated from reading UI file 'graph.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPH_H
#define UI_GRAPH_H

#include "qcustomplot.h"
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Graph {
public:
  QCustomPlot *widget;
  QLabel *l2;
  QLabel *l4;
  QLabel *l1;
  QLabel *l3;
  QDoubleSpinBox *xMin;
  QDoubleSpinBox *xMax;
  QDoubleSpinBox *rangX;
  QDoubleSpinBox *rangY;

  void setupUi(QDialog *Graph) {
    if (Graph->objectName().isEmpty())
      Graph->setObjectName(QString::fromUtf8("Graph"));
    Graph->resize(640, 480);
    widget = new QCustomPlot(Graph);
    widget->setObjectName(QString::fromUtf8("widget"));
    widget->setGeometry(QRect(19, 39, 591, 351));
    l2 = new QLabel(Graph);
    l2->setObjectName(QString::fromUtf8("l2"));
    l2->setGeometry(QRect(200, 400, 41, 16));
    l4 = new QLabel(Graph);
    l4->setObjectName(QString::fromUtf8("l4"));
    l4->setGeometry(QRect(200, 430, 41, 21));
    l1 = new QLabel(Graph);
    l1->setObjectName(QString::fromUtf8("l1"));
    l1->setGeometry(QRect(20, 400, 41, 16));
    l3 = new QLabel(Graph);
    l3->setObjectName(QString::fromUtf8("l3"));
    l3->setGeometry(QRect(10, 430, 41, 16));
    xMin = new QDoubleSpinBox(Graph);
    xMin->setObjectName(QString::fromUtf8("xMin"));
    xMin->setGeometry(QRect(60, 400, 131, 26));
    xMin->setMinimum(-100000000.000000000000000);
    xMin->setMaximum(100000000.000000000000000);
    xMin->setValue(-10.000000000000000);
    xMax = new QDoubleSpinBox(Graph);
    xMax->setObjectName(QString::fromUtf8("xMax"));
    xMax->setGeometry(QRect(250, 400, 131, 26));
    xMax->setMinimum(-100000000.000000000000000);
    xMax->setMaximum(100000000.000000000000000);
    xMax->setValue(10.000000000000000);
    rangX = new QDoubleSpinBox(Graph);
    rangX->setObjectName(QString::fromUtf8("rangX"));
    rangX->setGeometry(QRect(60, 430, 131, 26));
    rangX->setMinimum(-10000000.000000000000000);
    rangX->setMaximum(100000000.000000000000000);
    rangX->setValue(-10.000000000000000);
    rangY = new QDoubleSpinBox(Graph);
    rangY->setObjectName(QString::fromUtf8("rangY"));
    rangY->setGeometry(QRect(250, 430, 131, 26));
    rangY->setMinimum(-100000000.000000000000000);
    rangY->setMaximum(100000000.000000000000000);
    rangY->setValue(10.000000000000000);

    retranslateUi(Graph);

    QMetaObject::connectSlotsByName(Graph);
  } // setupUi

  void retranslateUi(QDialog *Graph) {
    Graph->setWindowTitle(
        QCoreApplication::translate("Graph", "Dialog", nullptr));
    l2->setText(QCoreApplication::translate("Graph", "xmax", nullptr));
    l4->setText(QCoreApplication::translate("Graph", "rangY:", nullptr));
    l1->setText(QCoreApplication::translate("Graph", "xmin", nullptr));
    l3->setText(QCoreApplication::translate("Graph", "rangX:", nullptr));
  } // retranslateUi
};

namespace Ui {
class Graph : public Ui_Graph {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPH_H
