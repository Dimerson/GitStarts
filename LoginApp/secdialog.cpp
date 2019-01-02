#include "secdialog.h"
#include "ui_secdialog.h"
#include <QPixmap>

SecDialog::SecDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecDialog)
{
    ui->setupUi(this);
    QPixmap pix(":/resources/img/India.jpg");
}

SecDialog::~SecDialog()
{
    delete ui;
}
