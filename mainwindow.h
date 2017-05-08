#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

signals:
    void display(int number);

private slots:
    void showTime();
    void showWeather(QString qstrWea);


private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
