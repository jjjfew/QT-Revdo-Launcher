#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>
#include "baidunaviwindow.h"
#include <QTimer>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //set window backgroud transparent
    //this->setAttribute(Qt::WA_TranslucentBackground, true);

    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(showTime()));
    timer->start(1000);

    showTime();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::showTime()
//! [1] //! [2]
{
    QTime time = QTime::currentTime();
    QString text = time.toString("hh:mm");
    if ((time.second() % 2) == 0)
        text[2] = ' ';
    ui->labelTime->setText(text);//在标签上显示时间
}

void MainWindow::showWeather(QString qstrWea)
{
    ui->labelWeather->setText(qstrWea);//在标签上显示当天最高温度
}

