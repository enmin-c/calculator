#ifndef MODEL_H
#define MODEL_H
#include <QString>

class model
{
public:
    model();
    void setnum1(int num);
    void setnum2(int num);
    void setflag(QString flag);
    QString docal();
private:
    int num1;
    int num2;
    QString flag;
};

#endif // MODEL_H
