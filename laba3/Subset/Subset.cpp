#include "Subset.h"

#include <utility>
#include <algorithm>
#include "../MyException.cpp"
Subset::Subset(vector<int> newArr) {
    for (int i = 0; i < newArr.size(); i++) {
        if (newArr[i] < 0 || newArr[i] > 9) {
            throw MyException("Invalid value");
        }
    }
    arr = std::move(newArr);
}

void Subset::printSubset() {
    if (arr.empty()) return;
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
}

Subset *Subset::operator+(Subset other) {
    for (int i = 0; i < other.arr.size(); i++) {
        if (find(arr.begin(), arr.end(), other.arr[i]) == arr.end()) {
            arr.push_back(other.arr[i]);
        }
    }
    return this;
}

Subset *Subset::operator+=(int a) {
    if (find(arr.begin(), arr.end(), a) == arr.end()) {
        arr.push_back(a);
    }
    return this;
}

Subset *Subset::operator-=(int a) {
    if (find(arr.begin(), arr.end(), a) != arr.end()) {
        arr.erase(find(arr.begin(), arr.end(), a));
    }
    return this;
}

bool Subset::operator==(Subset other) {
    sort(arr.begin(), arr.end());
    sort(other.arr.begin(), other.arr.end());
    if (arr == other.arr) return true;
    else return false;
}

bool Subset::operator!=(Subset other) {
    if (!operator==(other)) return true;
    else return false;
}

