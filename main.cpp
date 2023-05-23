#include "write.h"

int main() {
    string name = "test.txt";
    Write Test(name);

    Test.openFile();

    cout << Test.getName() << "\n";
    Test.checkFile();
    
    Test.entry_string("uoopfpspdo\n");
    Test.entry_int(5);
    Test.entry_string("\n");
    Test.entry_double(96.677888);

    Test.closeFile();

    return 0;
}
