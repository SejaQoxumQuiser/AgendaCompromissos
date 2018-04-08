/********************************************************************************
** Form generated from reading UI file 'telinhabuscar.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELINHABUSCAR_H
#define UI_TELINHABUSCAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_telinhaBuscar
{
public:
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QListWidget *listWidget;

    void setupUi(QDialog *telinhaBuscar)
    {
        if (telinhaBuscar->objectName().isEmpty())
            telinhaBuscar->setObjectName(QStringLiteral("telinhaBuscar"));
        telinhaBuscar->resize(400, 300);
        pushButton = new QPushButton(telinhaBuscar);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 240, 75, 23));
        lineEdit = new QLineEdit(telinhaBuscar);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(130, 210, 113, 20));
        listWidget = new QListWidget(telinhaBuscar);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(60, 10, 256, 192));

        retranslateUi(telinhaBuscar);

        QMetaObject::connectSlotsByName(telinhaBuscar);
    } // setupUi

    void retranslateUi(QDialog *telinhaBuscar)
    {
        telinhaBuscar->setWindowTitle(QApplication::translate("telinhaBuscar", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("telinhaBuscar", "Buscar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class telinhaBuscar: public Ui_telinhaBuscar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELINHABUSCAR_H
