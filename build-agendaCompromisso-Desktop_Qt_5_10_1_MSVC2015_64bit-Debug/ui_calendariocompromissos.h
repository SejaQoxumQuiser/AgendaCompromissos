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
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_calendarioCompromissos
{
public:
    QCalendarWidget *calendar;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *MES;
    QPushButton *pushButton_2;
    QListView *listView;

    void setupUi(QDialog *calendarioCompromissos)
    {
        if (calendarioCompromissos->objectName().isEmpty())
            calendarioCompromissos->setObjectName(QStringLiteral("calendarioCompromissos"));
        calendarioCompromissos->resize(599, 264);
        calendar = new QCalendarWidget(calendarioCompromissos);
        calendar->setObjectName(QStringLiteral("calendar"));
        calendar->setGeometry(QRect(20, 30, 296, 183));
        pushButton = new QPushButton(calendarioCompromissos);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 220, 75, 23));
        label = new QLabel(calendarioCompromissos);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(440, 20, 47, 13));
        MES = new QLabel(calendarioCompromissos);
        MES->setObjectName(QStringLiteral("MES"));
        MES->setGeometry(QRect(380, 70, 151, 16));
        pushButton_2 = new QPushButton(calendarioCompromissos);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(190, 220, 75, 23));
        listView = new QListView(calendarioCompromissos);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(340, 10, 241, 241));
        listView->raise();
        calendar->raise();
        pushButton->raise();
        label->raise();
        MES->raise();
        pushButton_2->raise();

        retranslateUi(calendarioCompromissos);

        QMetaObject::connectSlotsByName(calendarioCompromissos);
    } // setupUi

    void retranslateUi(QDialog *calendarioCompromissos)
    {
        calendarioCompromissos->setWindowTitle(QApplication::translate("calendarioCompromissos", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("calendarioCompromissos", "Adicionar", nullptr));
        label->setText(QApplication::translate("calendarioCompromissos", "DIA", nullptr));
        MES->setText(QString());
        pushButton_2->setText(QApplication::translate("calendarioCompromissos", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class calendarioCompromissos: public Ui_calendarioCompromissos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALENDARIOCOMPROMISSOS_H
