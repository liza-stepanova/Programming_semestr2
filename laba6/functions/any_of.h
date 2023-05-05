using namespace std;

#include "iostream"
namespace functions {
    template<typename T, typename predicate>
    bool any_of(T begin, T end, predicate p) {
        while (begin != end) {
            if (p(*begin) == true) return true;
            begin++;
        }
        return false;
    }
}