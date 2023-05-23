#include "Write/Write.h"

int main() {
    string name = "test.txt";
    Write::Write Test(name);

    Test.openFile();

    cout << Test.getName() << "\n";

    Test.entryString("uoopfpspdo\n");
    Test.entryInt(5);
    Test.entryString("\n");
    Test.entryDouble(96.677888);

    Test.closeFile();

    return 0;
}
