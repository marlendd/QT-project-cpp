/********************************************************************************
** Form generated from reading UI file 'show_data.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOW_DATA_H
#define UI_SHOW_DATA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Show_Data
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *Show_Data)
    {
        if (Show_Data->objectName().isEmpty())
            Show_Data->setObjectName("Show_Data");
        Show_Data->resize(570, 480);
        QFont font;
        font.setPointSize(12);
        Show_Data->setFont(font);
        verticalLayout = new QVBoxLayout(Show_Data);
        verticalLayout->setObjectName("verticalLayout");
        textEdit = new QTextEdit(Show_Data);
        textEdit->setObjectName("textEdit");
        textEdit->setFont(font);
        textEdit->setTextInteractionFlags(Qt::TextInteractionFlag::TextSelectableByKeyboard|Qt::TextInteractionFlag::TextSelectableByMouse);

        verticalLayout->addWidget(textEdit);

        pushButton = new QPushButton(Show_Data);
        pushButton->setObjectName("pushButton");
        pushButton->setFocusPolicy(Qt::FocusPolicy::StrongFocus);

        verticalLayout->addWidget(pushButton);


        retranslateUi(Show_Data);

        QMetaObject::connectSlotsByName(Show_Data);
    } // setupUi

    void retranslateUi(QDialog *Show_Data)
    {
        Show_Data->setWindowTitle(QCoreApplication::translate("Show_Data", "CSV-\320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", nullptr));
        pushButton->setText(QCoreApplication::translate("Show_Data", "\320\236\320\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Show_Data: public Ui_Show_Data {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOW_DATA_H
