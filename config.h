//config.h 应用程序基础尺寸配置头文件
#ifndef CONFIG_H
#define CONFIG_H

#include <QMessageBox>
#include <QIcon>
#include <QApplication>
#include <QStringList>
#include <QChar>

//——————————————————定义窗口基本尺寸大小等配置——————————————————————//
#define APP_TITLE "通用控制系统" //标题
#define USER_LENGTH 900        //用户窗口长
#define USER_WIDTH  780        //用户窗口宽
#define FIX_LENGTH  780        //参数调整长
#define FIX_WIDTH   520        //参数调整宽

//设定用户窗口尺寸
#define SET_USER_SIZE() \
    this->resize(USER_LENGTH,USER_WIDTH); \
    this->setMinimumSize(USER_LENGTH,USER_WIDTH); \
    this->setMaximumSize(USER_LENGTH,USER_WIDTH);\
    ui->tabWidget->resize(USER_LENGTH,USER_WIDTH);\
    ui->tabWidget->setMinimumSize(USER_LENGTH,USER_WIDTH);\
    ui->tabWidget->setMaximumSize(USER_LENGTH,USER_WIDTH);\

//设定参数设定窗口尺寸
#define SET_FIX_SIZE() \
    this->resize(FIX_LENGTH,FIX_WIDTH);\
    this->setMinimumSize(FIX_LENGTH,FIX_WIDTH);\
    this->setMaximumSize(FIX_LENGTH,FIX_WIDTH);\
    ui->tabWidget->resize(FIX_LENGTH,FIX_WIDTH);\
    ui->tabWidget->setMinimumSize(FIX_LENGTH,FIX_WIDTH);\
    ui->tabWidget->setMaximumSize(FIX_LENGTH,FIX_WIDTH);\
//应用程序启动设定开机动画和应用程序图标
#define APPLICATION_START()  \
    a.setWindowIcon(QIcon(":/resource/image/motor.png")); \
    QPixmap pages(":/resource/image/open.png"); \
    QSplashScreen splash(pages); \
    splash.show(); \
    sleep(2500); \
    MainWindow w; \
    w.show(); \
    splash.finish(&w); \

#endif // CONFIG_H
