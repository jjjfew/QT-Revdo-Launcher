# 界面上或下的横线
minwindow和baidunaviwindow的上面或下面有一条横线，是因为它们的ui文件继承的是 QMainWindow
如果想去掉横线，就要像其他window界面一样，创建其ui界面文件的时候，要继承QWidget

# 演示注意
1. 先连接摄像头，因为程序加载时就会初始化camera，之后再连也不行了

# QT移植到ARM要做的修改
1. arm版本下：mouse图标去掉，中文编码设置，否则会出现乱码，可以通过在pro文件中定义DEFINES += ARM
2. pro文件中指定的LIB库，arm板的路径和pc上的不一样，要修改
3. 在arm板qmake后，生成的Makefile中编译器都是带arm-linux-的，将前缀去掉
unix{
LIBS += /usr/lib/arm-linux-gnueabihf/libopencv_highgui.so \
        /usr/lib/arm-linux-gnueabihf/libopencv_core.so    \
       /usr/lib/arm-linux-gnueabihf/libopencv_imgproc.so
}
4. uic生成问题，nanopi自带的qt目录下的uic有问题，可以用自己编译的uic替换，或者用桌面版本的uic先生成h文件



