#include "mainwindow.h"
#include <QApplication>
#include "mainwidget.h"
#include <QTextCodec>
//在arm平台编译时，加这个可以去掉鼠标形状
#ifdef ARM
#include <QWSServer>
#endif

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

#ifdef ARM
    //设置鼠标样子属性为false
    QWSServer::setCursorVisible(false);
    //解决arm中显示乱码显示
    QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8"));
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));
#endif

    MainWidget w;
    w.setWindowFlags(Qt::CustomizeWindowHint);
    w.setFixedSize(1024,600); //设置窗体固定大小
    w.show();

    return a.exec();
}
