//hexconvert.h 使用C语言风格编写模块化函数
#ifndef HEXCONVERT_H
#define HEXCONVERT_H
#include "mainwindow.h"
#include "ui_mainwindow.h"

char ConvertHexChar(char &ch);
QByteArray QString2Hex(QString &str);

#endif // HEXCONVERT_H
