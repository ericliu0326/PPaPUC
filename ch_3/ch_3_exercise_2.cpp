//
// ch_3_exercise_2.cpp
// C++
//


#include "../std_lib_facilities.h"

// converts miles to km
int main()
{
    cout << "Enter a number of miles (to be converted to km\n";
    double miles {};
    cin >> miles;
    cout << miles*1.609 << "km\n";
    return 0;
}
