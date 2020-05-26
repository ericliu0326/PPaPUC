//  ch 4 drill #1
//  C++


#include "std_lib_facilities.h"

// enter two integers and spits integers back until '|' is enterred.

int main()
{
    int x = 0;
    int y = 0;
    cout << "Please enter two integers (program terminates upon receiving non-integer input): ";
    while (cin >> x >> y) {
       cout  << x << ", " << y << '\n';
    }
    return 0;
}



