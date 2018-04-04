#ifndef COMPROMISSO_H
#define COMPROMISSO_H

#include <QString>


class compromisso
{
private:


public:
    QString titulo, data, local, hora;
    compromisso();
    compromisso(QString titulo, QString data, QString local, QString hora);
};

#endif // COMPROMISSO_H
