#include "mainwindow.h"
#include <QApplication>
#include <QSplashScreen>
#include <QTime>
void sleep(int sleeptime)//延时函数
{
    QTime reachTime =QTime::currentTime().addMSecs(sleeptime);//形参传入设置延时时间
    while (QTime::currentTime()<reachTime)
        QCoreApplication::processEvents(QEventLoop::AllEvents,100);//持续直到到达目标时间
}
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);//表明该程序为Qt应用
    APPLICATION_START();//程序启动配置
    return a.exec();//程序持续执行
}
