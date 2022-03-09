#include "mainwindow.h"
//——————————————————帧头定义————————————————————
void MainWindow::on_pushButton_codedef_clicked()
{
    if(ui->comboBox_5->currentText()=="向左快速定义")
    {
        leftquick="";
        leftquick += ui->textEdit_4->toPlainText().toUtf8();
        ui->textBrowser_leftquick->clear();
        ui->textBrowser_leftquick->append(leftquick);
    }
    else if(ui->comboBox_5->currentText()=="向右快速定义")
    {
        rightquick="";
        rightquick +=ui->textEdit_4->toPlainText().toUtf8();
         ui->textBrowser_rightquick->clear();
        ui->textBrowser_rightquick->append(rightquick);
    }
    else if(ui->comboBox_5->currentText()=="向左慢速定义")
    {
        leftslow="";
        leftslow += ui->textEdit_4->toPlainText().toUtf8();
         ui->textBrowser_leftslow->clear();
        ui->textBrowser_leftslow->append(leftslow);
    }
    else if(ui->comboBox_5->currentText()=="向右慢速定义")
    {
        rightslow="";
        rightslow += ui->textEdit_4->toPlainText().toUtf8();
         ui->textBrowser_rightslow->clear();
        ui->textBrowser_rightslow->append(rightslow);
    }

}
