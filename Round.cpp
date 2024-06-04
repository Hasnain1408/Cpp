#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double num1 = 3.5;
    double num2 = 2.3;
    double num3 = -2.5;
    double num4 = -3.5;

    // rounds a floating-point number to the nearest integer, with halfway cases rounded away from zero.
    cout << "round(" << num1 << ") = " << round(num1) << endl;
    cout << "round(" << num2 << ") = " << round(num2) << endl;
    cout << "round(" << num3 << ") = " << round(num3) << endl;
    cout << "round(" << num4 << ") = " << round(num4) << endl;

    // truncates the decimal part, effectively rounding towards zero.
    double num5 = 3.9;
    cout << "trunc(" << num5 << ") = " << trunc(num5) << endl;

    double num6 = 3.7;
    cout << "floor(" << num6 << ") = " << floor(num6) << endl;

    double num7 = 3.2;
    cout << "ceil(" << num7 << ") = " << ceil(num7) << endl;

    return 0;
}
