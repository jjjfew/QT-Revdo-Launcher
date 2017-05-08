#include <QStackedLayout>
#include <QVBoxLayout>
#include "mainwindow.h"
#include "baidunaviwindow.h"
#include "mainwidget.h"
#include "camerawindow.h"
#include "phonewindow.h"
#include <QtNetwork>

MainWidget::MainWidget(QWidget *parent) :
    QWidget(parent)
{
    MainWindow *one = new MainWindow;
    BaiduNaviWindow *two = new BaiduNaviWindow ;
    CameraWindow *three=new CameraWindow;
    PhoneWindow *four=new PhoneWindow;

    QStackedLayout *stackLayout = new QStackedLayout;
    stackLayout->addWidget(one);
    stackLayout->addWidget(two);
    stackLayout->addWidget(three);
    stackLayout->addWidget(four);

    connect(one,SIGNAL(display(int)), stackLayout, SLOT(setCurrentIndex(int)));
    connect(two,SIGNAL(display(int)), stackLayout, SLOT(setCurrentIndex(int)));
    connect(three,SIGNAL(display(int)), stackLayout, SLOT(setCurrentIndex(int)));
    connect(four,SIGNAL(display(int)), stackLayout, SLOT(setCurrentIndex(int)));

    connect(this,SIGNAL(display(int)), stackLayout, SLOT(setCurrentIndex(int)));

    connect(this,SIGNAL(showWeather(QString)), one, SLOT(showWeather(QString)));
    connect(this,SIGNAL(showNavi(QString)), two, SLOT(showNavi(QString)));


    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addLayout(stackLayout);
    setLayout(mainLayout);

    //socket server
    server = new QTcpServer();
    server->listen(QHostAddress::Any, 54321);
    //有来处client的新连接时，就会触发acceptconnetion的slot
    connect(server, SIGNAL(newConnection()), this, SLOT(acceptConnection()));
}

void MainWidget::acceptConnection()
{
    qDebug()<<"connection from client";
    clientConnection = server->nextPendingConnection();
    //当有数据要读时，进行读clinet的slots
    connect(clientConnection, SIGNAL(readyRead()), this, SLOT(readClient()));
}

void MainWidget::readClient()
{
    strRead = clientConnection->readAll();
    //ui->label->setText(str);
    qDebug()<<strRead;
    remote_control();
    //或者
    //char buf[1024];
    //clientConnection->read(buf,1024);
   clientConnection->write("ok");  //读完client发来的数据后，返回的信息
   //不缓存，直接发送
   //clientConnection->flush();

   // 关闭服务器，不再进行监听
   //server->close();

}

void MainWidget::remote_control()
{
    if(strRead=="start:home\n")
        emit display(0);
     else if(strRead=="start:navi\n")
        emit display(1);
     else if(strRead=="start:camera\n")
       emit display(2);
     else if(strRead=="start:phone\n")
       emit display(3);
    // else if(strRead.contains("weather",Qt::CaseSensitive))
    else if(strRead.contains("weather"))
       emit showWeather(strRead);
    else if(strRead.contains("navi",Qt::CaseSensitive))
      emit showNavi(strRead);

      //qDebug()<<strRead;
}

MainWidget::~MainWidget()
{
}
