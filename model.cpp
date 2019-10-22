#include "model.h"
#include<QString>
model::model()
{
    this->num1 = 0;
    this->num2 = 0;
}

void model::setnum1(int num)
{
    this->num1 = num;
}

void model::setnum2(int num)
{
    this->num2 = num;
}

void model::setflag(QString flag)
{
    this->flag = flag;
}

QString model::docal()
{
    double result = 0;
    if(this->flag == "+") {
        result = this->num1+this->num2;
    }
    else if(this->flag == "-"){
        result = this->num1-this->num2;
    }
    else if(this->flag == "*"){
        result = this->num1*this->num2;
    }
    else if(this->flag == "/"){
        if(this->num2 == 0)
        {
            return "ERROR";
        }
        result = this->num1/this->num2;
    }
    else{
        return QString::number(this->num1);
    }
    return QString::number(result);
}
