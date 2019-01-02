#ifndef QDIRDEMO_H
#define QDIRDEMO_H

#include <QMainWindow>

namespace Ui {
class QDirDemo;
}

class QDirDemo : public QMainWindow
{
    Q_OBJECT

public:
    explicit QDirDemo(QWidget *parent = 0);
    ~QDirDemo();

private slots:
    void on_pushButton_clicked();

private:
    Ui::QDirDemo *ui;
};

#endif // QDIRDEMO_H
