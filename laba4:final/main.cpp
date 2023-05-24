#include <iostream>

#include "Interface/Collection.h"

int main() {

    int command;
    bool end = false;
    Collection all;
    cout
            << "1.Add line 2.Add trapezoid 3.Show figures 4.All squares 5.All perimetr 6.Mass of all figures 7.Memory 8.Sort figures 9.Break"
            << '\n';
    cout << "Chose option = ";
    while (cin >> command) {
        switch (command) {
            case 1:
                all.AddLine();
                break;
            case 2:
                all.AddTrapezoid();
                break;
            case 3:
                all.Print();
                break;
            case 4:
                all.AllSquare();
                break;
            case 5:
                all.AllPerimetr();
                break;
            case 6:
                all.AllMass();
                break;
            case 7:
                all.Memory();
                break;
            case 8:
                all.Sort();
                break;
            case 9:
                end = true;
                break;
        }
        if (end) break;
        cout << "Choose option = ";
    }


    return 0;

}
