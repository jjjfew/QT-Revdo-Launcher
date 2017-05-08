#ifndef MAINWIDGET
#define MAINWIDGET
#include <QWidget>
#include <QtNetwork>

class MainWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MainWidget(QWidget *parent = 0);
    ~MainWidget();

signals:
    void display(int number);
    void showWeather(QString qstrWea);
    void showNavi(QString qstrWea);

private:
    QTcpServer *server;
    QTcpSocket *clientConnection;
    QString strRead;
    void remote_control();


private slots:
    void acceptConnection();
    void readClient();
};

#endif // MAINWIDGET
