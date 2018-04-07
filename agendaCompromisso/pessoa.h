#ifndef PESSOA_H
#define PESSOA_H
#include <Qstring>


class pessoa
{
public:
    pessoa();
    pessoa(QString nome, QString email);
    QString nome,email;
};

#endif // PESSOA_H
