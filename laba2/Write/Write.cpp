#include "Write.h"

namespace Write {
    Write::Write(string name) {
        Write::name = name;
    }

    void Write::openFile() {
        fout.open(name);
        if (!fout.is_open()) {
            throw Exceptions::FileOpenException("Error");
        }
    }

    void Write::closeFile() {
        fout.close();
    }

    string Write::getName() {
        return name;
    }

    void Write::entryString(string text) {
        fout << text;
    }

    void Write::entryInt(int a) {
        fout << a;
    }

    void Write::entryDouble(double a) {
        fout << a;
    }
}