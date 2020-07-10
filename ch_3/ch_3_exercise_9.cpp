// ch_3_exercise_9.cpp
// C++


// converts spelled out numbers into digits (for integers 0 through 4)
#include "../std_lib_facilities.h"

int main()
{
    cout << "Please enter a spelled out number (such as 'two')\n";
    string number {};
    cin >> number;
    if (number == "zero")
        cout << "0\n";
    else if (number == "one")
        cout << "1\n";
    else if (number == "two")
        cout << "2\n";
    else if (number == "three")
        cout << "3\n";
    else if (number == "four")
        cout << "4\n";
    else
        cout << "Sorry! Not a number I know.\n";
}
