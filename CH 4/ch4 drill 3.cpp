//  ch 4 drill #3
//  C++


#include "std_lib_facilities.h"

// enter two integers and spits integers back in increasing value until non-integer such as '|' is enterred. If integers are equal it will indicate as such.

int main()
{
    int x = 0;
    int y = 0;
    cout << "Please enter two integers (program terminates upon receiving non-integer input): ";
    while (cin >> x >> y) {
        if (x < y)
            cout << x << ", " << y << '\n';
        else if (x > y)
            cout << y << ", " << x << '\n';
        else
            cout << "the numbers are equal " << x << ", " << y << '\n';
    }
    return 0;
}



