#include "functions/any_of.h"
#include "functions/one_of.h"
#include "functions/is_palindrome.h"
#include "CPoint/CPoint.h"
#include <vector>
#include <string>

int main() {
    vector<int> test_one = {25, 5, 10, 100};
    cout << functions::any_of(test_one.begin(), test_one.end(), [](int x) { return x % 5 != 0; }) << endl;

    vector<int> test_two = {1, 5, 10, 100};
    cout << functions::any_of(test_two.begin(), test_two.end(), [](int x) { return x % 5 != 0; }) << endl;

    vector<string> test_three = {"ooo", "oop", "ooa", "ioo"};
    cout << functions::one_of(test_three.begin(), test_three.end(), [](string x) { return x == "ooo"; }) << endl;

    vector<int> test_four = {1, 2, 3, 3, 2, 1};
    cout << functions::is_palindrome(test_four.begin(), test_four.end(), [](int x, int y) { return x == y; }) << endl;

    CPoint::CPoint point1(3, 5, 49);
    CPoint::CPoint point2(6, 3, 90);
    CPoint::CPoint point3(24, 0, 6);
    vector<CPoint::CPoint> test_five = {point1, point2, point3};
    cout << functions::one_of(test_five.begin(), test_five.end(), [](CPoint::CPoint a) { return a.z > 50; }) << endl;

    return 0;
}
