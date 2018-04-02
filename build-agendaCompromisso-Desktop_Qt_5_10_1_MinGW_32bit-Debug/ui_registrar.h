/********************************************************************************
** Form generated from reading UI file 'registrar.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRAR_H
#define UI_REGISTRAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_registrar
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;

    void setupUi(QDialog *registrar)
    {
        if (registrar->objectName().isEmpty())
            registrar->setObjectName(QStringLiteral("registrar"));
        registrar->resize(400, 300);
        label = new QLabel(registrar);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 30, 61, 16));
        label_2 = new QLabel(registrar);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 80, 47, 13));
        label_3 = new QLabel(registrar);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 110, 47, 13));
        label_4 = new QLabel(registrar);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 140, 47, 13));
        label_5 = new QLabel(registrar);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 170, 47, 13));
        pushButton = new QPushButton(registrar);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(100, 250, 75, 23));
        pushButton_2 = new QPushButton(registrar);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(190, 250, 75, 23));
        lineEdit = new QLineEdit(registrar);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(90, 80, 113, 20));
        lineEdit_2 = new QLineEdit(registrar);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(90, 110, 113, 20));
        lineEdit_2->setEchoMode(QLineEdit::Password);
        lineEdit_3 = new QLineEdit(registrar);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(90, 140, 113, 20));
        lineEdit_4 = new QLineEdit(registrar);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(90, 170, 113, 20));

        retranslateUi(registrar);

        QMetaObject::connectSlotsByName(registrar);
    } // setupUi

    void retranslateUi(QDialog *registrar)
    {
        registrar->setWindowTitle(QApplication::translate("registrar", "Dialog", nullptr));
        label->setText(QApplication::translate("registrar", "REGISTRO", nullptr));
        label_2->setText(QApplication::translate("registrar", "Nome", nullptr));
        label_3->setText(QApplication::translate("registrar", "Senha", nullptr));
        label_4->setText(QApplication::translate("registrar", "CPF", nullptr));
        label_5->setText(QApplication::translate("registrar", "E-mail", nullptr));
        pushButton->setText(QApplication::translate("registrar", "Voltar", nullptr));
        pushButton_2->setText(QApplication::translate("registrar", "Registrar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class registrar: public Ui_registrar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRAR_H
