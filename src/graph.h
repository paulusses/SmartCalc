#ifndef GRAPH_H
#define GRAPH_H

#include "QVector"
#include <QDialog>

extern "C" {
#include "s21_calc.h"
#include "s21_stack.h"
#include "s21_validator.h"
}

namespace Ui {
class Graph;
}

class Graph : public QDialog {
  Q_OBJECT

public:
  explicit Graph(QWidget *parent = nullptr);
  void on_pushButton_Graph_clicked(char *expression);
  ~Graph();

public slots:

  void on_pushButton_Graph_clicked();

private:
  Ui::Graph *ui;
  double xBegin, xEnd, h, X;
  int N;
  char temp_str[255];
  QString text_str;
  QVector<double> x, y;
};

#endif // GRAPH_H
