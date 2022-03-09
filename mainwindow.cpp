#include "config.h"
#include "hexconvert.h"
#include "mainwindow.h"
#include "CRC8.h"
#include <QDebug>
#include <thread>
#include <QThread>
//————————构造函数初始化——————————//
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);//初始化界面
    ui->tabWidget->setCurrentIndex(0);//设置用户界面为主页


    SET_USER_SIZE();//tabWidget和窗口大小同时设置

    setWindowTitle(APP_TITLE);//设置应用程序标题

    QObject::connect(ui->tabWidget, &QTabWidget::currentChanged, this, &MainWindow::sizechange);//初始化标签页设置

    //清空UI界面
    ui->comboBox->clear();

    //初始未打开串口禁止进行控制
    ui->pushButton_leftquick->setEnabled(false);
    ui->pushButton_leftslow->setEnabled(false);
    ui->pushButton_rightquick->setEnabled(false);
    ui->pushButton_rightslow->setEnabled(false);
    ui->pushButton_step->setEnabled(false);

    //设置串口热插拔检测
    timer=new QTimer;
    serial=new QSerialPort;
    connect(timer,&QTimer::timeout,this,&MainWindow::showValidPort);
    QObject::connect(serial, &QSerialPort::readyRead, this, &MainWindow::serialPort_readyRead);//连接信号和槽
    timer->start(1000); //每1000ms定时检测串口状态

    //开机扫描一次扫描可用串口
    foreach(const QSerialPortInfo &info, QSerialPortInfo::availablePorts())
        portStringList += info.portName();
    ui->comboBox->addItems(portStringList);

    //设置按钮禁用定时器
    lq = new QTimer();
    rq = new QTimer();

    //设置持续前进和持续后退按钮图片
    QPixmap buttonicon1(":/resource/image/slowback.png");
    ui->pushButton_leftslow->setIcon(buttonicon1);
    QPixmap buttonicon2(":/resource/image/slowforward.png");
    ui->pushButton_rightslow->setIcon(buttonicon2);

    ui->checkBox_crc8->setChecked(true);//默认打开CRC8校验

    //初始化按钮失能定时器
    ls=new QTimer();
    rs=new QTimer();

    ui->textEdit_speed->setText("200");//设置默认速度

    connect(ls,&QTimer::timeout,this,&MainWindow::butenable);//连接定时器信号和按钮响应槽
    connect(rs,&QTimer::timeout,this,&MainWindow::butenable);//连接信号和槽和按钮响应槽

    step_flag=0;//步数初始化
}
//————————串口热插拔扫描——————————//
void MainWindow::showValidPort()
{
    QStringList newPortStringList;
    foreach(const QSerialPortInfo &info, QSerialPortInfo::availablePorts())
        newPortStringList += info.portName();
    if(newPortStringList.size() != portStringList.size())
    {
        portStringList = newPortStringList;
        ui->comboBox->clear();
        ui->comboBox->addItems(portStringList);
    }
    if(currentCOM != ui->comboBox->currentText()) //串口突然断开连接了
    {
        currentCOM = ui->comboBox->currentText();
        if("断开设备" == ui->pushButton_serialopen->text())
        {
            on_pushButton_serialopen_clicked();
        }
    }
}
//————————串口接收——————————//
QByteArray handle="";
void MainWindow::serialPort_readyRead()
{
    QByteArray buffer;//接收区

    QByteArray PasteData;//缓冲区

    QByteArray ReadData;//处理的数据

    buffer= serial->readAll();//从接收区中读取数据

    char* ch;
    int16_t temp=0;
    int16_t temp1=0;
    float displ;

        //异常类：无头且变量为空，已丢失头部，数据不可靠，直接返回
        if ((!buffer.contains("$"))&(handle.isNull()))
        {
            return;
        }
        //第一种：有头无尾，先清空原有内容，再附加
        if ((buffer.contains("$"))&(!buffer.contains("~")))
        {
        PasteData.clear();
        PasteData.append(buffer);
        }
        //第二种：无头无尾且变量已有内容，数据中段部分，继续附加即可
        if ((!buffer.contains("$"))&(buffer.contains("~"))&(!PasteData.isNull()))
        {
        PasteData.append(buffer);
        }
        //第三种：无头有尾且变量已有内容，已完整读取，附加后输出数据，并清空变量
        if ((!buffer.contains("$"))&(buffer.contains("~"))&(!PasteData.isNull()))
        {
        PasteData.append(buffer);
        ReadData = PasteData;
        PasteData.clear();
        }
        //第四种：有头有尾（一段完整的内容），先清空原有内容，再附加，然后输出，最后清空变量
        if ((buffer.contains("$"))&(buffer.contains("~")))
        {
        PasteData.clear();
        PasteData.append(buffer);
        ReadData = PasteData;
        PasteData.clear();
        }

            ch=ReadData.data();
            qDebug()<<"buffer:"<<buffer;
            qDebug()<<"Paste:"<<PasteData;
            qDebug()<<"Read"<<ReadData;
            qDebug("ch0:%d,ch1:%d,ch2:%d,ch3:%d",ch[0],ch[1],ch[2],ch[3]);

                temp = (int16_t)ch[1] << 8;
                qDebug()<<"temp raw"<<temp;
                temp1 = (int16_t)ch[2];
                qDebug()<<"temp1 raw"<<temp1;
                temp1 &= 0x00FF;
                qDebug()<<"temp1 oped"<<temp1;
                step_flag=temp|temp1;
                ui->textBrowser->append(handle);

                if(step_flag>2805)
                    return;
                if(step_flag<0)
                    return;
                if(step_flag<=240&&step_flag>=237)
                    return;
                displ=0.01875*(float)step_flag;
                ui->textEdit->clear();
                ui->textEdit->append(QString::number(displ));
                ui->textBrowser->append(buffer);

                qDebug()<<"step_flag:"<<step_flag;

                buffer.squeeze();//释放内存
}
//打开串口
void MainWindow::on_pushButton_serialopen_clicked()
{
    if(ui->pushButton_serialopen->text()==QString("连接设备"))
     {
         //设置串口名
         serial->setPortName(ui->comboBox->currentText());

         //设置波特率
         serial->setBaudRate(ui->comboBox_2->currentText().toInt());

         //设置数据位数
         switch(ui->comboBox_3->currentIndex())
         {
         case 8: serial->setDataBits(QSerialPort::Data8); break;
         case 7: serial->setDataBits(QSerialPort::Data7); break;
         case 6: serial->setDataBits(QSerialPort::Data6); break;
         case 5: serial->setDataBits(QSerialPort::Data5); break;
         default: break;
         }

         //设置奇偶校验
         if(ui->comboBox_4->currentText()=="无")
             serial->setParity(QSerialPort::NoParity);
         else if(ui->comboBox_4->currentText()=="偶")
             serial->setParity(QSerialPort::EvenParity);
         else if(ui->comboBox_4->currentText()=="奇")
             serial->setParity(QSerialPort::OddParity);

         //设置停止位
         switch(ui->comboBox_8->currentIndex())
         {
         case 1: serial->setStopBits(QSerialPort::OneStop); break;
         case 2: serial->setStopBits(QSerialPort::TwoStop); break;
         default: break;
         }

         //设置流控制
         serial->setFlowControl(QSerialPort::NoFlowControl);

         //打开串口
         if(!serial->open(QIODevice::ReadWrite))
         {
             QMessageBox::about(NULL,"提示","无法打开串口!");
             return;
         }
         //下拉菜单控件失能
         ui->comboBox->setEnabled(false);
         ui->comboBox_2->setEnabled(false);
         ui->comboBox_3->setEnabled(false);
         ui->comboBox_4->setEnabled(false);
         ui->comboBox_8->setEnabled(false);
         ui->comboBox_5->setEnabled(false);
         //禁止编码定义
         ui->pushButton_headdef->setEnabled(false);
         ui->pushButton_serialopen->setText(QString("断开设备"));

         //发送按键使能
         ui->pushButton_send->setEnabled(true);
         ui->pushButton_leftquick->setEnabled(true);
         ui->pushButton_leftslow->setEnabled(true);
         ui->pushButton_rightquick->setEnabled(true);
         ui->pushButton_rightslow->setEnabled(true);
         ui->pushButton_step->setEnabled(true);
     }
     else
     {
         //关闭串口
         serial->close();
         //下拉菜单控件使能
         ui->comboBox->setEnabled(true);
         ui->comboBox_2->setEnabled(true);
         ui->comboBox_3->setEnabled(true);
         ui->comboBox_4->setEnabled(true);
         ui->comboBox_5->setEnabled(true);
         ui->comboBox_8->setEnabled(true);

         ui->pushButton_headdef->setEnabled(true);
         ui->pushButton_serialopen->setText(QString("连接设备"));
         //发送按键失能
         ui->pushButton_send->setEnabled(false);
         ui->pushButton_send->setEnabled(false);
         ui->pushButton_leftquick->setEnabled(false);
         ui->pushButton_leftslow->setEnabled(false);
         ui->pushButton_rightquick->setEnabled(false);
         ui->pushButton_rightslow->setEnabled(false);
         ui->pushButton_step->setEnabled(false);
     }
}
//发送数据
void MainWindow::on_pushButton_send_clicked()
{
    QByteArray data;
    QString buffer;
    //获取界面上的数据并转换成utf8格式的字节流
    if(ui->checkBox_hexsend->isChecked() == false)
    {
        data = ui->textEdit_2->toPlainText().toUtf8();
        crc_check_send(data);
    }
    else if(ui->checkBox_hexsend->isChecked()==true)
    {

          buffer= ui->textEdit_2->toPlainText();
          data=QString2Hex(buffer);
          serial->write(data);
    }
}
//————————————————————析构函数————————————————————————
MainWindow::~MainWindow()
{
    delete ui;
}
//————————————————————CRC处理过程封装和发送——————————
void MainWindow::crc_check_send(QByteArray &data)
{
    char* QByte2charbuf;
    QByteArray sendbytebuff;
    QByteArray temp="";
    unsigned char CRCtemp=0;
    if(ui->checkBox_crc8->isChecked()== true)
    {
        QByte2charbuf=data.data();
        for(uint8_t i=0;i<strlen(QByte2charbuf);i++)
            checkCRC(CRCtemp,QByte2charbuf[i]);
        sendbytebuff +=data;
        sendbytebuff +=CRCtemp;
        temp+=sendbytebuff;
        temp+=sendbytebuff;
        serial->write(temp);
    }
    else if(ui->checkBox_crc8->isChecked()== false)
    {
        serial->write(data);
    }
}
//切换页面自动调整大小槽函数
void MainWindow::sizechange()
{
    if(ui->tabWidget->currentIndex()==0)
    {
        SET_USER_SIZE();
    }
    else if(ui->tabWidget->currentIndex()==1)
    {
        SET_FIX_SIZE();
    }
}

