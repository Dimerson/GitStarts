#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QFileDialog>
#include <QString>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
    QFile file("/home/dimerson/Nada/QFileDemo/myfile.txt");

    if(!file.open(QFile::WriteOnly | QFile::Text))
        QMessageBox::warning(this, "title", "File not open");

    QTextStream out(&file);
    QString text = ui->plainTextEdit->toPlainText();
    out << text;
    file.flush();

    file.close();
}

void MainWindow::on_pushButton_clicked()
{
    QString filter = "All File (*.*) ;; Text File (*.txt) ;; XML File (*.odp)";
    QString file_name = QFileDialog::getOpenFileName(this, "Open a file", "/home/dimerson", filter);
    QFile file(file_name);

    if(!file.open(QFile::ReadOnly | QFile::Text))
        QMessageBox::warning(this, "title", "File not open");

    QTextStream in(&file);
    QString text = in.readAll();
    ui->plainTextEdit->setPlainText(text);

    file.close();
}
