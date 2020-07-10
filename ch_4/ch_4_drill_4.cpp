//  ch 4 drill #4
//  C++


#include "../std_lib_facilities.h"

// enter two doubles and spits doubles back in increasing value until non-double
// such as '|' is entered. If doubles are equal it will indicate as such.

int main()
{
    double x = 0;
    double y = 0;
    cout << "Please enter two numbers (program terminates upon receiving non-number inputs): ";
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



