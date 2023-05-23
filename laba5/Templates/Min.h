using namespace std;

#include "iostream"

namespace Templates {
    template<typename T>
    T Min(T a, T b) {
        if (a < b) return a;
        else return b;
    }
}
