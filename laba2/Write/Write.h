#ifndef LABA2_WRITE_H
#define LABA2_WRITE_H

#include <iostream>
#include <fstream>
#include <string>
#include "../Exceptions/FileOpenException.cpp"

using namespace std;

namespace Write {
    class Write {
    private:
        string name;
        ofstream fout;
    public:
        Write(string name);

        void openFile();

        void closeFile();

        string getName();

        void entryString(string text);

        void entryInt(int a);

        void entryDouble(double a);
    };
}

#endif //LABA2_WRITE_H
