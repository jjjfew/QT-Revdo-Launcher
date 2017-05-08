#include "camerawindow.h"
#include "ui_camerawindow.h"
#include <QDebug>
#include <opencv2/opencv.hpp>
#include <QImage>

CameraWindow::CameraWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CameraWindow)
{
    ui->setupUi(this);

    //摄像头显示窗口上下左右居中对齐，但无法充満整个窗口，可能和opencv设置有关
    ui->label->setAlignment(Qt::AlignVCenter|Qt::AlignHCenter);

    cam=NULL;
    timer=new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(readCamera()));

    openCamera();

}

CameraWindow::~CameraWindow()
{
    delete ui;
}

void CameraWindow::openCamera()
{
cam=cvCaptureFromCAM(200);//CV_CAP_V4L2
if(!cam)
{
    qDebug("create camera1 capture error!");
}

timer->start(33); //每33ms读一次摄像头
}

void CameraWindow::readCamera()
{
frame=cvQueryFrame(cam);
if(!frame)
{
    qDebug("get frame1 error!");
    return;
}

//rgbSwapped()用于转换QImage对象从BGR->RGB
QImage image=QImage((const uchar*)frame->imageData, frame->width, frame->height, QImage::Format_RGB888).rgbSwapped();
ui->label->setPixmap(QPixmap::fromImage(image));
}

void CameraWindow::closeCamera()
{
timer->stop();  //关闭定时读摄像头
cvReleaseCapture(&cam);
}
