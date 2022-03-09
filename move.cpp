#include "mainwindow.h"
#include <QKeyEvent>
#include <QThread>
//—————————————————信号：—————————————————————————————————
//————————————————1、clicked————————————————————————
//————————————————2、pressed————————————————————————
//————————————————3、released————————————————————————
//————————————————控制逻辑分别为：————————————————————————————
//————————————————Ⅰ.向左持续运动——————————————————————————————
//————————————————Ⅱ.向右持续运动——————————————————————————————
//————————————————Ⅲ.向左到头——————————————————————————————
//————————————————Ⅳ.向右到头——————————————————————————————
void MainWindow::on_pushButton_leftquick_clicked()//向左到头
{
    leftquick="^02000000";
    crc_check_send(leftquick);
    ui->textBrowser_leftquick->clear();
    ui->textBrowser_leftquick->append(leftquick);
    ui->textBrowser_leftquick->append(leftquick.toHex(':'));
}
void MainWindow::on_pushButton_rightquick_clicked()//向右到头
{
    rightquick="^12002805";
    crc_check_send(rightquick);
    ui->textBrowser_rightquick->clear();
    ui->textBrowser_rightquick->append(rightquick);
    ui->textBrowser_rightquick->append(rightquick.toHex(':'));
}
void MainWindow::on_pushButton_leftslow_pressed()//向左持续运动
{
    leftslow="";
    leftslow+='^';
    leftslow+='0';
    leftslow+=ui->textEdit_speed->toPlainText().toUtf8();
    leftslow+="9999";
    if(ui->textEdit_speed->toPlainText().toUtf8()=="")
    {
        ui->textEdit->clear();
        ui->textEdit->append("未设定速度");
    }
    else if(ui->textEdit_speed->toPlainText().toInt()<100)
    {
        ui->textEdit->clear();
        ui->textEdit->append("速度过小，请重新设定");
    }
    else if(ui->textEdit_speed->toPlainText().toInt()>600)
    {
        ui->textEdit->clear();
        ui->textEdit->append("速度过大，请重新设定");
        step="";
        return;
    }
    else
    {
        crc_check_send(leftslow);
        QThread::msleep(50);
        qDebug()<<"send:"<<leftslow;
    }
    ui->textBrowser_leftslow->clear();
    ui->textBrowser_leftslow->append(leftslow);
    ui->textBrowser_leftslow->append(leftslow.toHex(':'));
}
void MainWindow::on_pushButton_rightslow_pressed()//向右持续运动
{
    //sleep(10);
    rightslow="";
    rightslow+='^';
    rightslow+='1';
    rightslow+=ui->textEdit_speed->toPlainText().toUtf8();
    rightslow+="9999";
    if(ui->textEdit_speed->toPlainText().toUtf8()=="")
    {
        ui->textEdit->clear();
        ui->textEdit->append("未设定速度");
    }
    else if(ui->textEdit_speed->toPlainText().toInt()<100)
    {
        ui->textEdit->clear();
        ui->textEdit->append("速度过小，请重新设定");
    }
    else if(ui->textEdit_speed->toPlainText().toInt()>600)
    {
        ui->textEdit->clear();
        ui->textEdit->append("速度过大，请重新设定");
        step="";
        return;
    }
    else
    {

        crc_check_send(rightslow);
        QThread::msleep(50);
        qDebug()<<"send:"<<rightslow;

    }
    ui->textBrowser_rightslow->clear();
    ui->textBrowser_rightslow->append(rightslow);
    ui->textBrowser_rightslow->append(rightslow.toHex(':'));
}

void MainWindow::on_pushButton_leftslow_released()//向左持续运动松开
{
    if(ui->textEdit_speed->toPlainText().toUtf8()=="")
    {
        ui->textEdit->clear();
        ui->textEdit->append("未设定速度");
    }
    else if(ui->textEdit_speed->toPlainText().toInt()<100)
    {
        ui->textEdit->clear();
        ui->textEdit->append("速度过小，请重新设定");
    }
    else if(ui->textEdit_speed->toPlainText().toInt()>600)
    {
        ui->textEdit->clear();
        ui->textEdit->append("速度过大，请重新设定");
        step="";
        return;
    }
    else
    {
        leftslow="^02006666";
        QThread::msleep(50);
        crc_check_send(leftslow);
        qDebug()<<"send:"<<leftslow;
    }
    ls->start(50);
    ui->pushButton_leftslow->setEnabled(false);
}
void MainWindow::on_pushButton_rightslow_released()//向右持续运动松开
{
    //sleep(10);
    if(ui->textEdit_speed->toPlainText().toUtf8()=="")
    {
        ui->textEdit->clear();
        ui->textEdit->append("未设定速度");
    }
    else if(ui->textEdit_speed->toPlainText().toInt()<100)
    {
        ui->textEdit->clear();
        ui->textEdit->append("速度过小，请重新设定");
    }
    else if(ui->textEdit_speed->toPlainText().toInt()>600)
    {
        ui->textEdit->clear();
        ui->textEdit->append("速度过大，请重新设定");
        step="";
        return;
    }
    else
    {
        rightslow="^12006666";
        QThread::msleep(50);
        crc_check_send(rightslow);
        qDebug()<<"send:"<<rightslow;
    }
    rs->start(50);
    ui->pushButton_rightslow->setEnabled(false);
}
void MainWindow::keyPressEvent(QKeyEvent * event)//键盘操作
{

    switch (event->key())
    {
        case Qt::Key_Left:

            if(event->isAutoRepeat())
                return;
            else
            {
                leftslow="";
                leftslow+='^';
                leftslow+='0';
                leftslow+=ui->textEdit_speed->toPlainText().toUtf8();
                leftslow+="9999";
                if(ui->textEdit_speed->toPlainText().toUtf8()=="")
                {
                    ui->textEdit->clear();
                    ui->textEdit->append("未设定速度");
                }
                else if(ui->textEdit_speed->toPlainText().toInt()<100)
                {
                    ui->textEdit->clear();
                    ui->textEdit->append("速度过小，请重新设定");
                }
                else if(ui->textEdit_speed->toPlainText().toInt()>600)
                {
                    ui->textEdit->clear();
                    ui->textEdit->append("速度过大，请重新设定");
                    step="";
                    return;
                }
                else
                crc_check_send(leftslow);
            }
        break;

        case Qt::Key_Right:
        if(event->isAutoRepeat())
            return;
        else
        {
            rightslow="";
            rightslow+='^';
            rightslow+='1';
            rightslow+=ui->textEdit_speed->toPlainText().toUtf8();
            rightslow+="9999";
            if(ui->textEdit_speed->toPlainText().toUtf8()=="")
            {
                ui->textEdit->clear();
                ui->textEdit->append("未设定速度");
            }
            else if(ui->textEdit_speed->toPlainText().toInt()<100)
            {
                ui->textEdit->clear();
                ui->textEdit->append("速度过小，请重新设定");
            }
            else if(ui->textEdit_speed->toPlainText().toInt()>600)
            {
                ui->textEdit->clear();
                ui->textEdit->append("速度过大，请重新设定");
                step="";
                return;
            }
            else
            crc_check_send(rightslow);
        break;
        }
    }
}
void MainWindow::keyReleaseEvent(QKeyEvent * event)//键盘松开
{
    switch (event->key())
    {
    case Qt::Key_Left:

        if(event->isAutoRepeat())
            return;
        else
        {
            leftslow="^02006666";
            crc_check_send(leftslow);
        }

    break;

    case Qt::Key_Right:
        if(event->isAutoRepeat())
            return;
        else
        {
            rightslow="^12006666";
            crc_check_send(rightslow);
        }
    break;
    }
}
void MainWindow::on_pushButton_step_clicked()
{
    QByteArray temp="";
    step="";
    step+='^';
    if(ui->textEdit_step->toPlainText().toInt()<step_flag)
        step+='0';
    else if(ui->textEdit_step->toPlainText().toInt()>step_flag)
        step+='1';
    else if(ui->textEdit_step->toPlainText().toInt()==step_flag)
    {
        return;
    }
    step+=ui->textEdit_speed->toPlainText().toUtf8();
    if(ui->textEdit_speed->toPlainText().toUtf8()=="")
    {
        ui->textEdit->clear();
        ui->textEdit->append("未设定速度");
        step="";
        return;
    }
    else if(ui->textEdit_speed->toPlainText().toInt()<100)
    {
        ui->textEdit->clear();
        ui->textEdit->append("速度过小，请重新设定");
        step="";
        return;
    }
    else if(ui->textEdit_speed->toPlainText().toInt()>600)
    {
        ui->textEdit->clear();
        ui->textEdit->append("速度过大，请重新设定");
        step="";
        return;
    }
    else
    {
        if((ui->textEdit_step->toPlainText().toUtf8()=="")||strlen(ui->textEdit_step->toPlainText().toUtf8())>4||!((ui->textEdit_step->toPlainText().toInt()>=0)&&ui->textEdit_step->toPlainText().toInt()<=2805))
        {
            ui->textEdit->clear();
            ui->textEdit->append("步数设定不合法，请重新输入");
            return;
        }
        if(strlen(ui->textEdit_step->toPlainText().toUtf8())<4)//输入不足4位，先加一个0
        {
            temp+='0';
            if(strlen(ui->textEdit_step->toPlainText().toUtf8())==3)//输入3位，加完就输出
            {
                temp+=ui->textEdit_step->toPlainText().toUtf8();
                step+=temp;
            }
            else if(strlen(ui->textEdit_step->toPlainText().toUtf8())==2)//输入2位，再加一个0
            {
                temp+='0';
                temp+=ui->textEdit_step->toPlainText().toUtf8();
                step+=temp;
            }
            else if(strlen(ui->textEdit_step->toPlainText().toUtf8())==1)//输入1位，再加一个0
            {
                temp+='0';
                temp+='0';
                temp+=ui->textEdit_step->toPlainText().toUtf8();
                step+=temp;
            }
        }
        else if(strlen(ui->textEdit_step->toPlainText().toUtf8())==4)
            step+=ui->textEdit_step->toPlainText().toUtf8();//输入4位，不用加0
    }
    crc_check_send(step);
}
//按钮使能槽函数
void MainWindow::butenable()
{
    ui->pushButton_leftslow->setEnabled(true);
    ui->pushButton_rightslow->setEnabled(true);
    ui->pushButton_leftquick->setEnabled(true);
    ui->pushButton_rightquick->setEnabled(true);
    ls->stop();
    rs->stop();
}
