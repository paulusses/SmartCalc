#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "graph.h"
#include "qcustomplot.h"
#include <QMainWindow>

extern "C" {
#include "s21_calc.h"
#include "s21_stack.h"
#include "s21_validator.h"
}

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
  Q_OBJECT

public:
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();

private:
  Ui::MainWindow *ui;
  Graph *win2;

private slots:
  void digits_num();
  void point();
  void Equal();
  void Signals();
  void Function();
  void Clean();
  void X_num();
};
#endif // MAINWINDOW_H
