#ifndef LABA2_WRITE_H
#define LABA2_WRITE_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// TODO: change name, move to file
class Write {
private:
    string name;
    ofstream fout;
public:
    Write(string name);

    void openFile();

    void closeFile();

    string getName();

    void checkFile();

    void entry_string(string text);

    void entry_int(int a);

    void entry_double(double a);
};

#endif //LABA2_WRITE_H
