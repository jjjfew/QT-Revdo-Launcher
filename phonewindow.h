#ifndef PHONEWINDOW_H
#define PHONEWINDOW_H

#include <QWidget>

namespace Ui {
class PhoneWindow;
}

class PhoneWindow : public QWidget
{
    Q_OBJECT

public:
    explicit PhoneWindow(QWidget *parent = 0);
    ~PhoneWindow();

signals:
    void display(int number);

private:
    Ui::PhoneWindow *ui;
};

#endif // PHONEWINDOW_H
