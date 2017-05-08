#ifndef BAIDUNAVIWINDOW_H
#define BAIDUNAVIWINDOW_H
#include <QMainWindow>

namespace Ui {
class BaiduNaviWindow;
}

class BaiduNaviWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit BaiduNaviWindow(QWidget *parent = 0);
    ~BaiduNaviWindow();

signals:
    void display(int number);

private:
    Ui::BaiduNaviWindow *ui;

private slots:
    void showNavi(QString qstrWea);
};

#endif // BAIDUNAVIWINDOW_H
