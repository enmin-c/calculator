#include "cal.h"
#include "ui_cal.h"
#include <QString>
cal::cal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cal)
{
    ui->setupUi(this);
    this->temp = "";
    this->mod = new model;
    connect(this->ui->bn_0,SIGNAL(clicked(bool)),this,SLOT(getbn0()));
    connect(this->ui->bn_1,SIGNAL(clicked(bool)),this,SLOT(getbn1()));
    connect(this->ui->bn_2,SIGNAL(clicked(bool)),this,SLOT(getbn2()));
    connect(this->ui->bn_3,SIGNAL(clicked(bool)),this,SLOT(getbn3()));
}

cal::~cal()
{
    delete ui;
}

void cal::getbn0()
{
    if(this->temp!="")
    {
    this->temp+=this->ui->bn_0->text();
    this->ui->result->setText(this->temp);
    }
}

void cal::getbn1()
{
    this->temp+=this->ui->bn_1->text();
    this->ui->result->setText(this->temp);
}

void cal::getbn2()
{
    this->temp+=this->ui->bn_2->text();
    this->ui->result->setText(this->temp);
}

void cal::getbn3()
{
    this->temp+=this->ui->bn_3->text();
    this->ui->result->setText(this->temp);
}



void cal::on_bn_4_clicked()
{
    this->temp+=this->ui->bn_4->text();
    this->ui->result->setText(this->temp);
}

void cal::on_bn_5_clicked()
{
    this->temp+=this->ui->bn_5->text();
    this->ui->result->setText(this->temp);
}

void cal::on_bn_6_clicked()
{
    this->temp+=this->ui->bn_6->text();
    this->ui->result->setText(this->temp);
}

void cal::on_bn_7_clicked()
{
    this->temp+=this->ui->bn_7->text();
    this->ui->result->setText(this->temp);
}

void cal::on_bn_8_clicked()
{
    this->temp+=this->ui->bn_8->text();
    this->ui->result->setText(this->temp);
}

void cal::on_bn_9_clicked()
{
    this->temp+=this->ui->bn_9->text();
    this->ui->result->setText(this->temp);
}

void cal::on_bn_sum_clicked()
{
    int num = this->temp.toInt();
    this->mod->setnum1(num);
    this->temp = "";
    QString ex = this->ui->bn_sum->text();
    this->mod->setflag(ex);
}

void cal::on_bn_sub_clicked()
{
    int num = this->temp.toInt();
    this->mod->setnum1(num);
    this->temp = "";
    QString ex = this->ui->bn_sub->text();
    this->mod->setflag(ex);
}

void cal::on_bn_mul_clicked()
{
    int num = this->temp.toInt();
    this->mod->setnum1(num);
    this->temp = "";
    QString ex = this->ui->bn_mul->text();
    this->mod->setflag(ex);
}

void cal::on_bn_div_clicked()
{
    int num = this->temp.toInt();
    this->mod->setnum1(num);
    this->temp = "";
    QString ex = this->ui->bn_div->text();
    this->mod->setflag(ex);
}

void cal::on_bn_eq_clicked()
{
    int num = this->temp.toInt();
    this->mod->setnum2(num);
    QString res = this->mod->docal();
    this->ui->result->setText(res);
    this->temp = "";
}

void cal::on_bn_cl_clicked()
{
    this->temp = "";
    this->ui->result->setText("0");
}
