//
//  ch3_4 exercises.cpp
//  C++


#include "std_lib_facilities.h"

// produces outputs based off of two integers prompted

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
            << "product of two values " << val1 * val2 << '\n' // if integers provided are too big, will be unable to store accurate output
            << "ratios of values " << val1 / val2 << '\n';      // since values are in integers, this will not be accurate if it is a ratio
}
