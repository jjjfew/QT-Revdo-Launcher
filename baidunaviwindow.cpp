#include "baidunaviwindow.h"
#include "ui_baidunaviwindow.h"
#include "mainwindow.h"
#include "camerawindow.h"

BaiduNaviWindow::BaiduNaviWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BaiduNaviWindow)
{
    ui->setupUi(this);

}

BaiduNaviWindow::~BaiduNaviWindow()
{
    delete ui;
}


void BaiduNaviWindow::showNavi(QString qstr)
{
    ui->label->setText(qstr);//在标签上显示距离
}
