/********************************************************************************
** Form generated from reading UI file 'optiongeneral.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONGENERAL_H
#define UI_OPTIONGENERAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include <mylabelanimated.h>

QT_BEGIN_NAMESPACE

class Ui_OptionGeneral
{
public:
    QWidget *widget;
    QLabel *label;
    MyLabelAnimated *l_general_back;
    MyLabelAnimated *label_3;
    MyLabelAnimated *label_4;
    MyLabelAnimated *l_about;

    void setupUi(QWidget *OptionGeneral)
    {
        if (OptionGeneral->objectName().isEmpty())
            OptionGeneral->setObjectName(QStringLiteral("OptionGeneral"));
        OptionGeneral->resize(320, 322);
        OptionGeneral->setStyleSheet(QLatin1String("background-image: url(:/icons/general/fondo_transparente.png);\n"
"border-image: url(:/icons/general/fondo_transparente.png);"));
        widget = new QWidget(OptionGeneral);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 320, 322));
        widget->setStyleSheet(QStringLiteral("background-image: url(:/icons/general/fondo_transparente.png);"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 247, 320, 75));
        label->setStyleSheet(QLatin1String("background-image: url(:/icons/general/fondo_transparente.png);\n"
"border-image: url(:/icons/main_menu/general_menu/footer_general_menu.png);"));
        l_general_back = new MyLabelAnimated(widget);
        l_general_back->setObjectName(QStringLiteral("l_general_back"));
        l_general_back->setGeometry(QRect(0, 0, 320, 75));
        l_general_back->setStyleSheet(QLatin1String("background-image: url(:/icons/general/fondo_transparente.png);\n"
"border-image: url(:/icons/main_menu/general_menu/header_general_menu.png);"));
        label_3 = new MyLabelAnimated(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setEnabled(false);
        label_3->setGeometry(QRect(0, 59, 320, 81));
        QFont font;
        font.setFamily(QStringLiteral("Swis721 Lt BT"));
        font.setPointSize(24);
        label_3->setFont(font);
        label_3->setStyleSheet(QLatin1String("background-color: rgb(200, 200, 200);\n"
"color: rgb(77, 77, 77);"));
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new MyLabelAnimated(widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setEnabled(false);
        label_4->setGeometry(QRect(0, 120, 320, 75));
        label_4->setFont(font);
        label_4->setStyleSheet(QLatin1String("background-color: rgb(200, 200, 200);\n"
"color: rgb(77, 77, 77);"));
        label_4->setAlignment(Qt::AlignCenter);
        l_about = new MyLabelAnimated(widget);
        l_about->setObjectName(QStringLiteral("l_about"));
        l_about->setGeometry(QRect(0, 183, 320, 84));
        l_about->setStyleSheet(QLatin1String("background-image: url(:/icons/general/fondo_transparente.png);\n"
"border-image: url(:/icons/main_menu/general_menu/about_button.png);"));
        label->raise();
        label_3->raise();
        label_4->raise();
        l_about->raise();
        l_general_back->raise();

        retranslateUi(OptionGeneral);

        QMetaObject::connectSlotsByName(OptionGeneral);
    } // setupUi

    void retranslateUi(QWidget *OptionGeneral)
    {
        OptionGeneral->setWindowTitle(QApplication::translate("OptionGeneral", "Form", nullptr));
        label->setText(QString());
        l_general_back->setText(QString());
        label_3->setText(QApplication::translate("OptionGeneral", "Idioma", nullptr));
        label_4->setText(QApplication::translate("OptionGeneral", "Estado de Bater\303\255a", nullptr));
        l_about->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class OptionGeneral: public Ui_OptionGeneral {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONGENERAL_H