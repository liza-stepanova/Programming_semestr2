using namespace std;

#include "iostream"

namespace functions {
    template<typename T, typename predicate>
    bool is_palindrome(T begin, T end, predicate p) {
        end--;
        while (begin < end) {
            if (!p(*begin, *end)) return false;
            begin++;
            end--;
        }
        return true;
    }
}