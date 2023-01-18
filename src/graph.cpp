#include "graph.h"
#include "ui_graph.h"
#include "qcustomplot.h"

Graph::Graph(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Graph)
{
    ui->setupUi(this);

}

Graph::~Graph()
{
    delete ui;
}

void Graph::on_pushButton_Graph_clicked(char *expression)
{
    ui->widget->clearGraphs();
    strcpy(temp_str, expression);

    double x_min_num = ui->xMin->text().toDouble();
    double x_max_num = ui->xMax->text().toDouble();
    double range_x = ui->rangX->text().toDouble();
    double range_y = ui->rangY->text().toDouble();

    xBegin = x_min_num;
       xEnd = x_max_num;

   //    xBegin = 1;
   //    xEnd = 100;

       ui->widget->xAxis->setRange(-1 * range_x, range_x);
       ui->widget->yAxis->setRange(-1 * range_y, range_y);

       h = 0.1;

       N = (xEnd - xBegin)/h + 2;
       for (X = xBegin; X < xEnd; X += h) {
           x.push_back(X);
           y.push_back(s21_calc(expression, X));

       }

       ui->widget->addGraph();
       ui->widget->graph(0)->addData(x,y);

       ui->widget->setInteraction(QCP::iRangeZoom, true);
       ui->widget->setInteraction(QCP::iRangeDrag, true);

       ui->widget->replot();

       x.clear();
       y.clear();


}

void Graph::on_pushButton_Graph_clicked()
{
    Graph::on_pushButton_Graph_clicked(temp_str);
}
