#include "qdirdemo.h"
#include "ui_qdirdemo.h"
#include <QDir>
#include <QMessageBox>

QDirDemo::QDirDemo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QDirDemo)
{
    ui->setupUi(this);
    QDir dir;
    foreach (QFileInfo var, dir.drives())
    {
        ui->comboBox->addItem(var.absoluteFilePath());
    }

    QDir dir_2("/home/dimerson/Nada/QDirDemo");
    foreach (QFileInfo var, dir_2.entryInfoList())
    {
        if(var.isDir())
            ui->listWidget->addItem("Dir : " + var.absoluteFilePath());
        else
            if(var.isFile())
                ui->listWidget->addItem("File : " + var.absoluteFilePath());
    }

}

QDirDemo::~QDirDemo()
{
    delete ui;
}

void QDirDemo::on_pushButton_clicked()
{
    QDir dir("/home/dimerson/Nada/QDirDemo/YYY");
    if(dir.exists())
        QMessageBox::information(this, "", "dir exists");
    else
        dir.mkpath("/home/dimerson/Nada/QDirDemo/YYY");

}
