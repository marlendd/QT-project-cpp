#ifndef ADD_DIALOG_H
#define ADD_DIALOG_H

#include <QDialog>
#include "Function.h"

namespace Ui {
    class Add_Dialog;
}

class Add_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Add_Dialog(QWidget *parent = nullptr);
    ~Add_Dialog();
    Function getData();
    void setType(QString arg);
    void setName(QString arg);
    void setArgs(QString arg);
    void setComment(QString arg);

private:
    Ui::Add_Dialog *ui;
};

#endif // ADD_DIALOG_H
