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
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>

QT_BEGIN_NAMESPACE

class Ui_calendarioCompromissos
{
public:
    QCalendarWidget *calendar;
    QLabel *MES;
    QPushButton *pushButton_2;
    QGroupBox *groupBox;
    QLineEdit *lineEdit_2;
    QDateEdit *dateEdit;
    QLineEdit *lineEdit_3;
    QLabel *label_6;
    QLabel *label_2;
    QPushButton *pushButton_3;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QLabel *label_5;
    QTimeEdit *timeEdit;
    QLabel *label_3;
    QListWidget *listWidget;
    QPushButton *remover;

    void setupUi(QDialog *calendarioCompromissos)
    {
        if (calendarioCompromissos->objectName().isEmpty())
            calendarioCompromissos->setObjectName(QStringLiteral("calendarioCompromissos"));
        calendarioCompromissos->resize(1098, 264);
        calendar = new QCalendarWidget(calendarioCompromissos);
        calendar->setObjectName(QStringLiteral("calendar"));
        calendar->setGeometry(QRect(20, 30, 296, 183));
        MES = new QLabel(calendarioCompromissos);
        MES->setObjectName(QStringLiteral("MES"));
        MES->setGeometry(QRect(380, 70, 151, 16));
        pushButton_2 = new QPushButton(calendarioCompromissos);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(120, 220, 75, 23));
        groupBox = new QGroupBox(calendarioCompromissos);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setEnabled(true);
        groupBox->setGeometry(QRect(740, 10, 321, 251));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(60, 110, 113, 20));
        dateEdit = new QDateEdit(groupBox);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(60, 50, 110, 22));
        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setEnabled(true);
        lineEdit_3->setGeometry(QRect(90, 140, 171, 71));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 80, 47, 13));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 20, 47, 13));
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(120, 220, 75, 23));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 110, 47, 13));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(60, 20, 113, 20));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 140, 61, 16));
        timeEdit = new QTimeEdit(groupBox);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));
        timeEdit->setGeometry(QRect(60, 80, 118, 22));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 50, 47, 13));
        listWidget = new QListWidget(calendarioCompromissos);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(330, 30, 401, 192));
        remover = new QPushButton(calendarioCompromissos);
        remover->setObjectName(QStringLiteral("remover"));
        remover->setGeometry(QRect(480, 230, 75, 23));

        retranslateUi(calendarioCompromissos);

        QMetaObject::connectSlotsByName(calendarioCompromissos);
    } // setupUi

    void retranslateUi(QDialog *calendarioCompromissos)
    {
        calendarioCompromissos->setWindowTitle(QApplication::translate("calendarioCompromissos", "Dialog", nullptr));
        MES->setText(QString());
        pushButton_2->setText(QApplication::translate("calendarioCompromissos", "Criar Evento", nullptr));
        groupBox->setTitle(QApplication::translate("calendarioCompromissos", "Registrar compromisso", nullptr));
        label_6->setText(QApplication::translate("calendarioCompromissos", "Hora", nullptr));
        label_2->setText(QApplication::translate("calendarioCompromissos", "Titulo", nullptr));
        pushButton_3->setText(QApplication::translate("calendarioCompromissos", "Adicionar", nullptr));
        label_4->setText(QApplication::translate("calendarioCompromissos", "Local", nullptr));
        label_5->setText(QApplication::translate("calendarioCompromissos", "Comentarios", nullptr));
        label_3->setText(QApplication::translate("calendarioCompromissos", "Data", nullptr));
        remover->setText(QApplication::translate("calendarioCompromissos", "Remover", nullptr));
    } // retranslateUi

};

namespace Ui {
    class calendarioCompromissos: public Ui_calendarioCompromissos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALENDARIOCOMPROMISSOS_H
