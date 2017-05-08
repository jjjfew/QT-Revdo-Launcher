#ifndef CAMERAWINDOW_H
#define CAMERAWINDOW_H
#include <QTimer>
#include <QTime>
#include <opencv2/opencv.hpp>
#include <QWidget>

namespace Ui {
class CameraWindow;
}

class CameraWindow : public QWidget
{
    Q_OBJECT

public:
    explicit CameraWindow(QWidget *parent = 0);
    ~CameraWindow();

signals:
    void display(int number);

private slots:
    void openCamera();
    void closeCamera();
    void readCamera();

private:
    Ui::CameraWindow *ui;

    QTimer *timer;
    CvCapture *cam;// 视频获取结构， 用来作为视频获取函数的一个参数
    IplImage  *frame;//申请IplImage类型指针，就是申请内存空间来存放每一帧图像
};

#endif // CAMERAWINDOW_H
