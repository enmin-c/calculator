#ifndef CAL_H
#define CAL_H

#include <QDialog>
#include "model.h"
#include <Qstring>
namespace Ui {
class cal;
}

class cal : public QDialog
{
    Q_OBJECT

public:
    explicit cal(QWidget *parent = 0);
    ~cal();
private slots:
    void getbn1();
    void getbn2();
    void getbn3();
    void getbn0();

    void on_bn_4_clicked();

    void on_bn_5_clicked();

    void on_bn_6_clicked();

    void on_bn_7_clicked();

    void on_bn_8_clicked();

    void on_bn_9_clicked();

    void on_bn_sum_clicked();

    void on_bn_sub_clicked();

    void on_bn_mul_clicked();

    void on_bn_div_clicked();

    void on_bn_eq_clicked();

    void on_bn_cl_clicked();

private:
    QString temp;
    Ui::cal *ui;
    model *mod;
};

#endif // CAL_H
