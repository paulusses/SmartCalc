#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLabel>
#include <QString>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    win2 = new Graph(this);

    // for numbers
    connect(ui->pushButton_0, SIGNAL(clicked()), this, SLOT(digits_num()));
    connect(ui->pushButton_1, SIGNAL(clicked()), this, SLOT(digits_num()));
    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(digits_num()));
    connect(ui->pushButton_3, SIGNAL(clicked()), this, SLOT(digits_num()));
    connect(ui->pushButton_4, SIGNAL(clicked()), this, SLOT(digits_num()));
    connect(ui->pushButton_5, SIGNAL(clicked()), this, SLOT(digits_num()));
    connect(ui->pushButton_6, SIGNAL(clicked()), this, SLOT(digits_num()));
    connect(ui->pushButton_7, SIGNAL(clicked()), this, SLOT(digits_num()));
    connect(ui->pushButton_8, SIGNAL(clicked()), this, SLOT(digits_num()));
    connect(ui->pushButton_9, SIGNAL(clicked()), this, SLOT(digits_num()));

    // point
    connect(ui->pushButton_point, SIGNAL(clicked()), this, SLOT(point()));
    // sign
    connect(ui->pushButton_plus, SIGNAL(clicked()), this, SLOT(Signals()));
    connect(ui->pushButton_minus, SIGNAL(clicked()), this, SLOT(Signals()));
    connect(ui->pushButton_div, SIGNAL(clicked()), this, SLOT(Signals()));
    connect(ui->pushButton_mult, SIGNAL(clicked()), this, SLOT(Signals()));
    connect(ui->pushButton_pow, SIGNAL(clicked()), this, SLOT(Signals()));
    connect(ui->pushButton_leftS, SIGNAL(clicked()), this, SLOT(Signals()));
    connect(ui->pushButton_RightS, SIGNAL(clicked()), this, SLOT(Signals()));
    connect(ui->pushButton_mod, SIGNAL(clicked()), this, SLOT(Signals()));

    // function

    connect(ui->pushButton_sin, SIGNAL(clicked()), this, SLOT(Function()));
    connect(ui->pushButton_cos, SIGNAL(clicked()), this, SLOT(Function()));
    connect(ui->pushButton_tan, SIGNAL(clicked()), this, SLOT(Function()));
    connect(ui->pushButton_ln, SIGNAL(clicked()), this, SLOT(Function()));
    connect(ui->pushButton_log, SIGNAL(clicked()), this, SLOT(Function()));
    connect(ui->pushButton_acos, SIGNAL(clicked()), this, SLOT(Function()));
    connect(ui->pushButton_asin, SIGNAL(clicked()), this, SLOT(Function()));
    connect(ui->pushButton_atan, SIGNAL(clicked()), this, SLOT(Function()));
    connect(ui->pushButton_sqrt, SIGNAL(clicked()), this, SLOT(Function()));

    // clean

    connect(ui->pushButton_clean, SIGNAL(clicked()), this, SLOT(Clean()));

    connect(ui->pushButton_X, SIGNAL(clicked()), this, SLOT(X_num()));

    connect(ui->pushButton_Go, SIGNAL(clicked()), this, SLOT(Equal()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::digits_num()
{
    QPushButton *button = (QPushButton *)sender();
    QString new_label = ui->result->text() + button->text();

    ui->result->setText(new_label);

}

void MainWindow::point()
{
    if (!(ui->result->text().endsWith('.')))
        ui->result->setText(ui->result->text() + ".");
}


void MainWindow::Signals()
{
    QPushButton *button = (QPushButton *)sender();

    QString new_label;

    new_label = ui->result->text();

    if (button->text() == "÷" && !(ui->result->text().endsWith("÷")) && !(ui->result->text().endsWith("/"))) {
        new_label += "/";
    } else if (button->text() == "*" && !(ui->result->text().endsWith("*")) && !(ui->result->text().endsWith("*"))) {
        new_label += "*";
    } else if (button->text() == "+" && !(ui->result->text().endsWith("+"))) {
        new_label += "+";
    } else if (button->text() == "-" && !(ui->result->text().endsWith("-"))) {
        new_label += "-";
    } else if (button->text() == "^" && !(ui->result->text().endsWith("^"))) {
        new_label += "^";
    } else if (button->text() == "mod" && !(ui->result->text().endsWith("mod"))) {
        new_label += "mod";
    } else if (button->text() == "(") {
        new_label += "(";
    } else if (button->text() == ")") {
        new_label += ")";
    }

    ui->result->setText(new_label);
}

void MainWindow::Function()
{
    QPushButton *button = (QPushButton *)sender();

    QString new_label;

    new_label = ui->result->text() + button->text() + "(";

    ui->result->setText(new_label);

}


void MainWindow::Equal()
{
    char* str = new char(ui->result->text().length());
    QByteArray barr = ui->result->text().toLatin1();
    strncpy(str, barr, ui->result->text().length() + 1);

    if (validator(str) == 0) {
        ui->result->setText("Invalid Input");
    } else if (ui->result->text().contains("x")) {
          win2->on_pushButton_Graph_clicked(str);
          win2->show();
    } else {
        setlocale(LC_NUMERIC, "C");
        double result_num = 0;
        result_num = s21_calc(str, 0.0);

        QString numberResult = QString::number(result_num, 'f', 6);
        ui->result->setText(numberResult);
    }
    delete(str);
}

void MainWindow::Clean()
{
    ui->result->setText("");
}

void MainWindow::X_num()
{

    QString new_label;

    if (!(ui->result->text().endsWith("x")))
        new_label = ui->result->text() + "x";

    ui->result->setText(new_label);
}


