#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/img/tumblr_inline_n786zhm0fw1sefqx0.png");
}

MainWindow::~MainWindow()
{
    delete ui;
}
