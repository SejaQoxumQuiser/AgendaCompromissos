/********************************************************************************
** Form generated from reading UI file 'registrarcompromisso.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRARCOMPROMISSO_H
#define UI_REGISTRARCOMPROMISSO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>

QT_BEGIN_NAMESPACE

class Ui_registrarCompromisso
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEdit;
    QDateEdit *dateEdit;
    QTimeEdit *timeEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;

    void setupUi(QDialog *registrarCompromisso)
    {
        if (registrarCompromisso->objectName().isEmpty())
            registrarCompromisso->setObjectName(QStringLiteral("registrarCompromisso"));
        registrarCompromisso->resize(400, 300);
        pushButton = new QPushButton(registrarCompromisso);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 250, 75, 23));
        label = new QLabel(registrarCompromisso);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 40, 47, 13));
        label_2 = new QLabel(registrarCompromisso);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(140, 10, 181, 16));
        label_3 = new QLabel(registrarCompromisso);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 70, 47, 13));
        label_4 = new QLabel(registrarCompromisso);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 130, 47, 13));
        label_5 = new QLabel(registrarCompromisso);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(40, 160, 61, 16));
        label_6 = new QLabel(registrarCompromisso);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(40, 100, 47, 13));
        lineEdit = new QLineEdit(registrarCompromisso);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(80, 40, 113, 20));
        dateEdit = new QDateEdit(registrarCompromisso);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(80, 70, 110, 22));
        timeEdit = new QTimeEdit(registrarCompromisso);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));
        timeEdit->setGeometry(QRect(80, 100, 118, 22));
        lineEdit_2 = new QLineEdit(registrarCompromisso);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(80, 130, 113, 20));
        lineEdit_3 = new QLineEdit(registrarCompromisso);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setEnabled(true);
        lineEdit_3->setGeometry(QRect(110, 160, 171, 71));

        retranslateUi(registrarCompromisso);

        QMetaObject::connectSlotsByName(registrarCompromisso);
    } // setupUi

    void retranslateUi(QDialog *registrarCompromisso)
    {
        registrarCompromisso->setWindowTitle(QApplication::translate("registrarCompromisso", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("registrarCompromisso", "Adicionar", nullptr));
        label->setText(QApplication::translate("registrarCompromisso", "Titulo", nullptr));
        label_2->setText(QApplication::translate("registrarCompromisso", "Registrar compromisso", nullptr));
        label_3->setText(QApplication::translate("registrarCompromisso", "Data", nullptr));
        label_4->setText(QApplication::translate("registrarCompromisso", "Local", nullptr));
        label_5->setText(QApplication::translate("registrarCompromisso", "Comentarios", nullptr));
        label_6->setText(QApplication::translate("registrarCompromisso", "Hora", nullptr));
    } // retranslateUi

};

namespace Ui {
    class registrarCompromisso: public Ui_registrarCompromisso {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRARCOMPROMISSO_H
