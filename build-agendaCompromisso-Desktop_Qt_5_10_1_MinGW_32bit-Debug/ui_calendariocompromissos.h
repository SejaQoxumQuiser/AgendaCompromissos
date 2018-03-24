/********************************************************************************
** Form generated from reading UI file 'calendariocompromissos.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALENDARIOCOMPROMISSOS_H
#define UI_CALENDARIOCOMPROMISSOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_calendarioCompromissos
{
public:
    QCalendarWidget *calendarWidget;
    QPushButton *pushButton;

    void setupUi(QDialog *calendarioCompromissos)
    {
        if (calendarioCompromissos->objectName().isEmpty())
            calendarioCompromissos->setObjectName(QStringLiteral("calendarioCompromissos"));
        calendarioCompromissos->resize(336, 264);
        calendarWidget = new QCalendarWidget(calendarioCompromissos);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));
        calendarWidget->setGeometry(QRect(20, 30, 296, 183));
        pushButton = new QPushButton(calendarioCompromissos);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 220, 75, 23));

        retranslateUi(calendarioCompromissos);

        QMetaObject::connectSlotsByName(calendarioCompromissos);
    } // setupUi

    void retranslateUi(QDialog *calendarioCompromissos)
    {
        calendarioCompromissos->setWindowTitle(QApplication::translate("calendarioCompromissos", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("calendarioCompromissos", "Adicionar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class calendarioCompromissos: public Ui_calendarioCompromissos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALENDARIOCOMPROMISSOS_H
