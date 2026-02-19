/********************************************************************************
** Form generated from reading UI file 'add_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_DIALOG_H
#define UI_ADD_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_Add_Dialog
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_3;
    QLabel *label_3;
    QLineEdit *lineEdit_4;
    QLabel *label_4;
    QComboBox *comboBox;

    void setupUi(QDialog *Add_Dialog)
    {
        if (Add_Dialog->objectName().isEmpty())
            Add_Dialog->setObjectName("Add_Dialog");
        Add_Dialog->resize(400, 280);
        QFont font;
        font.setPointSize(12);
        Add_Dialog->setFont(font);
        buttonBox = new QDialogButtonBox(Add_Dialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(10, 240, 361, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        lineEdit_2 = new QLineEdit(Add_Dialog);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(200, 60, 191, 31));
        lineEdit_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label = new QLabel(Add_Dialog);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 60, 191, 31));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_2 = new QLabel(Add_Dialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 20, 191, 31));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lineEdit_3 = new QLineEdit(Add_Dialog);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(10, 130, 381, 31));
        lineEdit_3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_3 = new QLabel(Add_Dialog);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 100, 381, 31));
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lineEdit_4 = new QLineEdit(Add_Dialog);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(10, 190, 381, 31));
        QPalette palette;
        QBrush brush(QColor(0, 85, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush1(QColor(0, 85, 0, 128));
        brush1.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush1);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush1);
#endif
        QBrush brush2(QColor(120, 120, 120, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        QBrush brush3(QColor(0, 0, 0, 128));
        brush3.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        lineEdit_4->setPalette(palette);
        label_4 = new QLabel(Add_Dialog);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 160, 381, 31));
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);
        comboBox = new QComboBox(Add_Dialog);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(200, 20, 191, 31));
        QWidget::setTabOrder(lineEdit_2, lineEdit_3);
        QWidget::setTabOrder(lineEdit_3, lineEdit_4);

        retranslateUi(Add_Dialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Add_Dialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Add_Dialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Add_Dialog);
    } // setupUi

    void retranslateUi(QDialog *Add_Dialog)
    {
        Add_Dialog->setWindowTitle(QString());
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("Add_Dialog", "swapElements", nullptr));
        label->setText(QCoreApplication::translate("Add_Dialog", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \321\204\321\203\320\275\320\272\321\206\320\270\320\270:", nullptr));
        label_2->setText(QCoreApplication::translate("Add_Dialog", "\320\222\320\276\320\267\320\262\321\200\320\260\321\211\320\260\320\265\320\274\321\213\320\271 \321\202\320\270\320\277:", nullptr));
        lineEdit_3->setPlaceholderText(QCoreApplication::translate("Add_Dialog", "int el, float im, bool is_prime", nullptr));
        label_3->setText(QCoreApplication::translate("Add_Dialog", "\320\220\321\200\320\263\321\203\320\274\320\265\320\275\321\202\321\213 (\321\207\320\265\321\200\320\265\320\267 \320\267\320\260\320\277\321\217\321\202\321\203\321\216):", nullptr));
        label_4->setText(QCoreApplication::translate("Add_Dialog", "\320\232\320\276\320\274\320\274\320\265\320\275\321\202\320\260\321\200\320\270\320\271:", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Add_Dialog", "int", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Add_Dialog", "double", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("Add_Dialog", "float", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("Add_Dialog", "bool", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("Add_Dialog", "unsigned int", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("Add_Dialog", "short", nullptr));

    } // retranslateUi

};

namespace Ui {
    class Add_Dialog: public Ui_Add_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_DIALOG_H
