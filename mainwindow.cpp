#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QRandomGenerator>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->button1, SIGNAL(clicked()), this, SLOT(buttonClicked()));

    ui->plot->setXLabel("X Axis", 12);
    ui->plot->setYLabel("Y Axis", 12);

    //ui->plot->setFramePen(QPen(Qt::black, 1.5));
    //ui->plot->setTicksPen(QPen(Qt::black, 1));
    ui->plot->setGridPen(Qt::NoPen);
    //ui->plot->setPadding(60, 30, 30, 60);
}


void MainWindow::buttonClicked()
{
    ui->plot->clear();

    QVector<double> X, Y1, Y2, Y3;
    for (int i = 0; i < 25; i++)
    {
        X.append(i);
        Y1.append(0.1*i+1);
        Y2.append(0.01*i*i);
        Y3.append(3*QRandomGenerator::global()->generateDouble());
    }

    ui->plot->plotXY(X, Y1);
    ui->plot->plotXY(X, Y2, Qt::red, 1, Qt::red, 6);
    ui->plot->plotXY(X, Y3, Qt::green, 2);

    //ui->plot->setAxes(0, 10, 0, 1);
    ui->plot->setAxesAuto();

}


MainWindow::~MainWindow()
{
    delete ui;
}
