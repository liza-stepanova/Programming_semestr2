using namespace std;

#include "iostream"

namespace functions {
    template<typename T, typename predicate>
    bool one_of(T begin, T end, predicate p) {
        int count = 0;
        while (begin != end) {
            if (p(*begin) == true) count++;
            begin++;
        }
        if (count == 1) return true;
        else return false;
    }
}