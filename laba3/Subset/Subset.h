#ifndef LABA3_SUBSET_H
#define LABA3_SUBSET_H

#include <iostream>
#include <vector>


using namespace std;

class Subset {
private:
    vector<int> arr;
public:
    Subset(vector<int> newArr);

    void printSubset();

    Subset* operator+(Subset other);

    Subset* operator+=(int a);

    Subset* operator-=(int a);

    bool operator==(Subset other);

    bool operator!=(Subset other);

};


#endif //LABA3_SUBSET_H
