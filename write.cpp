#include "write.h"

Write::Write(string name) {
    Write::name = name;
}

void Write::openFile() {
    fout.open(name);
    if (!fout.is_open()) {
        // TODO: throw std::exception();
        cout << "Ошибка" << "\n";
    } else {
        cout << "Файл открыт" << "\n";
    }
}

void Write::closeFile() {
    fout.close();
//    if (!fout.is_open()) {
//        cout << "Файл закрыт" << "\n";
//    }
}

string Write::getName() {
    return name;
}

void Write::setName(string name) {
    Write::name = name;
}

bool Write::isOpen() {
    if (fout.is_open()) {
        cout << "Файл открыт" << "\n";
    } else {
        cout << "Файл закрыт" << "\n";
    }
}

void Write::entry_string(string text) {
    fout << text;
}

void Write::entry_int(int a) {
    fout << a;
}

void Write::entry_double(double a) {
    fout << a;
}