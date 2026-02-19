#include "add_dialog.h"
#include "ui_add_dialog.h"

Add_Dialog::Add_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Add_Dialog)
{
    ui->setupUi(this);
    setFixedSize(size());
    setWindowTitle(" ");
}

Add_Dialog::~Add_Dialog()
{
    delete ui;
}

void Add_Dialog::setType(QString arg) {
    ui->comboBox->currentText();
}

void Add_Dialog::setName(QString arg) {
    ui->lineEdit_2->setText(arg);
}

void Add_Dialog::setArgs(QString arg) {
    ui->lineEdit_3->setText(arg);
}

void Add_Dialog::setComment(QString arg) {
    ui->lineEdit_4->setText(arg);
}

Function Add_Dialog::getData() {
    Function result;
    QString edit3 = ui->lineEdit_3->text().simplified().replace(";", ",");
    if (edit3.size() > 0) {
        QStringList temp = edit3.replace(";", ",").split(",");
        int len = temp.size();
        result.setNArguments(len);
        std::copy(temp.begin(), temp.end(), result.begin());
    }
    result.setType(ui->comboBox->currentText().simplified().replace(";", ","));
    result.setName(ui->lineEdit_2->text().simplified().replace(";", ","));
    result.setComment(ui->lineEdit_4->text().simplified().replace(";", ","));
    return result;
}
