#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "add_dialog.h"
#include "show_data.h"
#include "QFileInfo"
#include "QFileDialog"
#include "QTextStream"
#include "Vector.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_action_New_triggered()
{
    if (ui->tableWidget->rowCount() > 0) {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Внимание");
        msgBox.setText("Вы уверены, что хотите создать новый файл?\nВсе проделанные изменения не будут сохранены.");
        msgBox.setIcon(QMessageBox::Question);
        msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
        msgBox.setDefaultButton(QMessageBox::Yes);
        if (msgBox.exec() == QMessageBox::No) {
            return;
        }
    }
    ui->tableWidget->setRowCount(0);
    main_vector.clear();
    file_ = "";
    setWindowTitle("*" + file_ + " – Функции языка программирования");
}

void MainWindow::on_action_Exit_triggered()
{
    if (ui->tableWidget->rowCount() > 0 || file_ != "") {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Внимание");
        msgBox.setText("Вы уверены, что хотите выйти?\nВсе проделанные изменения не будут сохранены.");
        msgBox.setIcon(QMessageBox::Question);
        msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
        msgBox.setDefaultButton(QMessageBox::Yes);
        if (msgBox.exec() == QMessageBox::No) {
            return;
        }
    }
    exit(0);
}

void MainWindow::on_action_About_triggered()
{
    QMessageBox::about(this,
                       "О программе",
                       "Курсовая работа по дисциплине ООП\n"
                       "Тема: Класс, характеризующий функцию (процедуру) любого языка программирования\n"
                       "Вариант 10\n"
                       "Выполнил студент группы ИКПИ-34\n"
                       "Лезинов Вадим");
}

void MainWindow::on_action_Add_triggered()
{
    Add_Dialog myDialog;
    if (myDialog.exec() == QDialog::Accepted)
    {
        Function t = myDialog.getData();
        auto len = t.getNArguments();
        ui->tableWidget->setRowCount(ui->tableWidget->rowCount() + 1);
        ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 0, new QTableWidgetItem(t.getType()));
        ui->tableWidget->item(ui->tableWidget->rowCount() - 1, 0)->setForeground(QBrush(FunctionType));
        ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 1, new QTableWidgetItem(t.getName()));
        ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 2, new QTableWidgetItem(QString::number(len)));
        QString arg = "";
        if (len > 0) {
            arg = t[0];
            for (int i = 1; i < len; ++i) {
                arg += ", " + t[i];
            }
        }
        ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 3, new QTableWidgetItem(arg));
        ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 4, new QTableWidgetItem(t.getComment()));
        ui->tableWidget->item(ui->tableWidget->rowCount() - 1, 0)->setForeground(QBrush(FunctionType));
        main_vector.push_back(t);
        ui->statusBar->showMessage("Запись добавлена");
        setWindowTitle("*" + file_ + " – Функции языка программирования");
    }
}

void MainWindow::on_lineEdit_textChanged(const QString &arg1)
{
    ui->tableWidget->setCurrentCell(-1, -1);  // Снимаем выделение с ячеек
    if (arg1.isEmpty()) {
        return;  // Если строка пуста, прекращаем выполнение
    }

    ui->tableWidget->setSelectionMode(QAbstractItemView::MultiSelection);  // Устанавливаем многократный режим выделения

    // Ищем все элементы, содержащие arg1
    auto find_items = ui->tableWidget->findItems(arg1, Qt::MatchContains);
    int len = find_items.size();

    // Для каждого найденного элемента устанавливаем его как выделенный
    for (int i = 0; i < len; ++i) {
        auto item = find_items.at(i);
        item->setSelected(true);  // Устанавливаем выделение на найденный элемент
    }

    // Возвращаем режим на одиночный выбор
    ui->tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);

    // Показываем в статусбаре количество найденных ячеек
    ui->statusBar->showMessage("Найдено " + QString::number(len) + " ячеек");
}


void MainWindow::on_action_Edit_triggered()
{
    auto list = ui->tableWidget->selectedItems();
    if (list.size() > 0) {
        Add_Dialog myDialog;
        myDialog.setType(list.at(0)->text());
        myDialog.setName(list.at(1)->text());
        myDialog.setArgs(list.at(3)->text());
        myDialog.setComment(list.at(4)->text());
        if (myDialog.exec() == QDialog::Accepted)
        {
            Function t = myDialog.getData();
            list.at(0)->setText(t.getType());
            list.at(1)->setText(t.getName());
            list.at(2)->setText(QString::number(t.getNArguments()));
            auto len = t.getNArguments();
            QString arg = "";
            if (len > 0) {
                arg = t[0];
                for (int i = 1; i < len; ++i) {
                    arg += ", " + t[i];
                }
            }
            list.at(3)->setText(arg);
            list.at(4)->setText(t.getComment());
            main_vector[list.at(0)->row()].setType(t.getType());
            main_vector[list.at(1)->row()].setName(t.getName());
            main_vector[list.at(2)->row()].setNArguments(t.getNArguments());
            int k = list.at(3)->row();
            std::copy(t.begin(), t.end(), main_vector[k].begin());
            main_vector[list.at(4)->row()].setComment(t.getComment());
            ui->statusBar->showMessage("Запись отредактирована");
            setWindowTitle("*" + file_ + " – Функции языка программирования");
        }
    }
}

void MainWindow::on_action_Delete_triggered()
{
    auto list = ui->tableWidget->selectionModel()->selectedRows();
    if (list.size() > 0) {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Внимание");
        msgBox.setText("Вы уверены, что хотите удалить строки с выбранными элементами?");
        msgBox.setIcon(QMessageBox::Question);
        msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
        msgBox.setDefaultButton(QMessageBox::Yes);
        if (msgBox.exec() == QMessageBox::Yes) {
            for (auto k = list.rbegin(); k != list.rend(); ++k) {
                auto idx = (*k).row();
                main_vector.erase(idx);
                ui->tableWidget->removeRow(idx);
            }
            ui->statusBar->showMessage("Запись удалена");
            setWindowTitle("*" + file_ + " – Функции языка программирования");
        }
    } else ui->statusBar->showMessage("Таблица пуста");
}

void MainWindow::on_action_Clear_triggered()
{
    if (ui->tableWidget->rowCount() > 0) {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Внимание");
        msgBox.setText("Вы уверены, что хотите очистить таблицу?");
        msgBox.setIcon(QMessageBox::Question);
        msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
        msgBox.setDefaultButton(QMessageBox::Yes);
        if (msgBox.exec() == QMessageBox::Yes) {
            ui->tableWidget->setRowCount(0);
            main_vector.clear();
            ui->statusBar->showMessage("Таблица очищена");
            setWindowTitle("*" + file_ + " – Функции языка программирования");
        }
    } else ui->statusBar->showMessage("Таблица пуста");
}

void MainWindow::on_action_Open_triggered(bool isClean)
{
    QString file_name = QFileDialog::getOpenFileName(this, "Открыть файл...", ".", "CSV files (*.csv);;All files (*.*);;");
    QFileInfo check_file(file_name);
    if (check_file.exists() && check_file.isFile()) {
        if (isClean) {
            MainWindow::on_action_New_triggered();
        }
        QFile file(file_name);
        if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            QTextStream in(&file);
            //in.setEncoding(QStringConverter::Encoding::Utf8);

            QString header = in.readLine();
            if (!header.isNull() && header.contains("Тип функции;Имя;")) {
            } else {
                in.seek(0);
            }

            while (!in.atEnd()) {
                QString line = in.readLine();
                QStringList fields = line.split(";");

                if (fields.size() != 5) {
                    ui->statusBar->showMessage("Некорректная строка: " + line);
                    continue;
                }

                Function t;
                t.setType(fields[0].simplified());
                t.setName(fields[1].simplified());
                t.setNArguments(fields[2].toInt());

                t.setComment(fields[4].simplified());

                ui->tableWidget->setRowCount(ui->tableWidget->rowCount() + 1);
                int currentRow = ui->tableWidget->rowCount() - 1;
                ui->tableWidget->setItem(currentRow, 0, new QTableWidgetItem(t.getType()));
                ui->tableWidget->setItem(currentRow, 1, new QTableWidgetItem(t.getName()));
                ui->tableWidget->setItem(currentRow, 2, new QTableWidgetItem(QString::number(t.getNArguments())));
                ui->tableWidget->setItem(currentRow, 3, new QTableWidgetItem(fields[3]));
                ui->tableWidget->setItem(currentRow, 4, new QTableWidgetItem(t.getComment()));

                main_vector.push_back(t);
            }

            file.close();
            ui->statusBar->showMessage("Записи из файла добавлены");
            file_ = file_name;
            setWindowTitle(file_ + " – Функции языка программирования");
        } else {
            ui->statusBar->showMessage("Файл '" + file_name + "' не удалось открыть на чтение (" + file.errorString() + ")");
        }
    } else {
        ui->statusBar->showMessage("Файл '" + file_name + "' не существует");
    }
}


void MainWindow::on_action_Save_triggered()
{
    if (file_.isEmpty()) {
        MainWindow::on_action_SaveAs_triggered();
        return;
    }

    QFile file(file_);
    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream out(&file);
        out.setEncoding(QStringConverter::Encoding::Utf8); // Устанавливаем кодировку UTF-8

        // Записываем строку заголовка
        out << "Тип функции;Имя;Число аргументов;Аргументы;Комментарий\n";

        int rowCount = ui->tableWidget->rowCount();
        for (int i = 0; i < rowCount; ++i) {
            // Получаем данные из каждой ячейки и проверяем их наличие
            QString type = ui->tableWidget->item(i, 0) ? ui->tableWidget->item(i, 0)->text() : "";
            QString name = ui->tableWidget->item(i, 1) ? ui->tableWidget->item(i, 1)->text() : "";
            QString numArgs = ui->tableWidget->item(i, 2) ? ui->tableWidget->item(i, 2)->text() : "";
            QString args = ui->tableWidget->item(i, 3) ? ui->tableWidget->item(i, 3)->text() : "";
            QString comment = ui->tableWidget->item(i, 4) ? ui->tableWidget->item(i, 4)->text() : "";

            // Записываем строку
            out << type << ";"
                << name << ";"
                << numArgs << ";"
                << args << ";"
                << comment << "\n";
        }

        file.close();
        ui->statusBar->showMessage("Файл записан");
        setWindowTitle(file_ + " – Функции языка программирования");
    } else {
        ui->statusBar->showMessage("Ошибка при сохранении файла");
    }
}




void MainWindow::on_action_SaveAs_triggered()
{
    QString file_name = QFileDialog::getSaveFileName(this, "Сохранить файл...", ".", "CSV files (*.csv);;All files (*.*);;");
    if (file_name != "") {
        file_ = file_name;
        MainWindow::on_action_Save_triggered();
    }
}

void MainWindow::on_action_Merge_triggered()
{
    QString old_file = file_;
    MainWindow::on_action_Open_triggered(false);
    file_ = old_file;
    ui->statusBar->showMessage("Данные объединены");
    setWindowTitle("*" + file_ + " – Функции языка программирования");
}

void MainWindow::on_tableWidget_cellDoubleClicked(int, int)
{
    MainWindow::on_action_Edit_triggered();
}

void MainWindow::on_action_ShowData_triggered()
{
    Show_Data myDialog;
    QString s;
    for (auto &k : main_vector) {
        QString arg = "";
        int len = k.getNArguments();
        if (len > 0) {
            arg = k[0];
            for (int i = 1; i < len; ++i) {
                arg += ", " + k[i];
            }
        }
        s += k.getType() + ";" + k.getName() + ";" + arg + ";" + k.getComment() + "\n";
    }
    myDialog.setText(s);
    myDialog.exec();
}
