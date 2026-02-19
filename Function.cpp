#include "Function.h"
#include <QtAlgorithms>

// Конструктор по умолчанию
Function::Function() {}

// Конструктор
Function::Function(QString name, QString type, QString comment, int n)
    : name(name), type(type), n_arguments(n), comment(comment) {
    if (n_arguments > 0) {
        arguments = new QString[static_cast<unsigned>(n_arguments)];
    }
}

// Конструктор копирования
Function::Function(const Function &da) : Function(da.name, da.type, da.comment, da.n_arguments) {
    if (n_arguments > 0) {
        std::copy(da.arguments, da.arguments + da.n_arguments, arguments);
    }
}

// Оператор копирования
Function & Function::operator=(const Function &da) {
    Function temp(da);
    swap(*this, temp);
    return *this;
}

// Конструктор перемещения
Function::Function(Function &&da) noexcept {
    name = std::move(da.name);
    type = std::move(da.type);
    n_arguments = da.n_arguments;
    arguments = da.arguments;
    comment = std::move(da.comment);
    da.n_arguments = 0;
    da.name = da.type = da.comment = "";
    da.arguments = nullptr;
}

// Оператор перемещения
Function & Function::operator=(Function &&da) noexcept {
    if (this != &da) {
        swap(*this, da);
        da.n_arguments = 0;
        da.name = da.type = da.comment = "";
        delete[] da.arguments;
        da.arguments = nullptr;
    }
    return *this;
}

// Деструктор
Function::~Function() {
    delete[] arguments;
}

// Оператор получения элемента по индексу I
QString & Function::operator[](int i) {
    return arguments[i];
}

// Очистка массива
void Function::clear() {
    n_arguments = 0;
    name = type = comment = "";
    delete[] arguments;
    arguments = nullptr;
}

// Оператор приведения к типу bool
Function::operator bool() {
    return !name.isEmpty() || !type.isEmpty() || !comment.isEmpty() || n_arguments != 0 || arguments != nullptr;
}

// Установка имени
void Function::setName(QString arg) {
    name = arg;
}

// Получение имени
const QString & Function::getName() {
    return name;
}

// Установка типа
void Function::setType(QString arg) {
    type = arg;
}

// Получение имени
const QString & Function::getType() {
    return type;
}

// Установка комментария
void Function::setComment(QString arg) {
    comment = arg;
}

// Получение комментария
const QString & Function::getComment() {
    return comment;
}

// Получение количества аргументов
const int & Function::getNArguments() {
    return n_arguments;
}

// Установка числа аргументов
void Function::setNArguments(int n) {
    if (n > 0) {
        QString *temp = new QString[static_cast<unsigned>(n)];
        std::copy(arguments, arguments + std::min(n, n_arguments), temp);
        std::swap(arguments, temp);
        n_arguments = n;
        delete[] temp;
        temp = nullptr;
        return;
    }
    // if n == 0
    delete[] arguments;
    arguments = nullptr;
    n_arguments = 0;
}

void swap(Function &first, Function &second) noexcept {
    std::swap(first.name, second.name);
    std::swap(first.type, second.type);
    std::swap(first.n_arguments, second.n_arguments);
    std::swap(first.arguments, second.arguments);
    std::swap(first.comment, second.comment);
}
