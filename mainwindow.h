//mainwindow.h 主窗口界面类头文件
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSerialPort>        //提供访问串口的功能
#include <QSerialPortInfo>    //提供系统中存在的串口的信息
#include "string.h"
#include <QTimer>
#include "config.h"
#include "ui_mainwindow.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT        //此语句表示为Qt库对象

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void crc_check_send(QByteArray &data);
protected:



private slots:
    void showValidPort();//热插拔显示
    void serialPort_readyRead();//接收数据槽

    void on_pushButton_serialopen_clicked();//打开串口按钮

    void on_pushButton_send_clicked();//发送按钮

    //void on_pushButton_clear_receive_clicked();//清空接受区按钮

    void on_pushButton_codedef_clicked();//定义编码

    void on_pushButton_clearencode_clicked();//清除编码按钮

    void on_pushButton_leftslow_pressed();//左慢按下：持续发送
    void on_pushButton_leftslow_released();//左慢松开：结束发送

    void on_pushButton_rightslow_pressed();//右慢按下：持续发送
    void on_pushButton_rightslow_released();//右慢松开：结束发送

    void on_pushButton_leftquick_clicked();//左快点击：发送

    void on_pushButton_rightquick_clicked();//右快点击：发送



    void on_pushButton_step_clicked();

    void keyPressEvent(QKeyEvent * event);//键盘控制按下发出信号
    void keyReleaseEvent(QKeyEvent * event);//键盘控制抬起发出信号
    void sizechange();
    void butenable();
private:
    Ui::MainWindow *ui;//界面ui

    QSerialPort *serial;//串口对象

    QTimer *timer;//连续发送定时器

    QString currentCOM = "";//当前串口字符存储
    QStringList portStringList;//热插拔存储

    QByteArray leftquick;
    QByteArray rightquick;
    QByteArray leftslow;
    QByteArray rightslow;
    QByteArray step;

    QTimer* lq;
    QTimer* ls;
    QTimer* rq;
    QTimer* rs;

    int16_t step_flag;

};
#endif // MAINWINDOW_H
