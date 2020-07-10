//
// ch_3_exercise_5.cpp
// C++


#include "../std_lib_facilities.h"

int main()
{
    cout << "Please enter two integer values.\n";
    int val1 {}, val2 {};
    cin >> val1 >> val2;
    if (val1 < val2)
        cout << val1 << " is less than " << val2 << '\n';
    if (val1 > val2)
        cout << val1 << " is greater than " << val2 << '\n';
    else if (val1 == val2)
        cout << val1 << " is equal to " << val2 << '\n';
    cout << "sum of two values " << val1 + val2 << '\n'
            << "difference of value 2 from value 1 is " << val1 - val2 << '\n'
        << "product of two values " << val1 * val2 << '\n';
    double ratio_value1 = val1, ratio_value2 = val2;
    cout << "ratios of values " << ratio_value1 / ratio_value2 << '\n';
}
