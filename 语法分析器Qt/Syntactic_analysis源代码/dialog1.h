#ifndef DIALOG1_H
#define DIALOG1_H

#include <QDialog>
#include<QPainter>
#include<QPaintEvent>
namespace Ui {
class Dialog1;
}

class Dialog1 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog1(QWidget *parent = 0);
    ~Dialog1();
    void paintEvent(QPaintEvent *);
private:
    Ui::Dialog1 *ui;
};

#endif // DIALOG1_H
