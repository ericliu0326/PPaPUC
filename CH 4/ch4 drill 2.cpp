//  ch 4 drill #2
//  C++


#include "std_lib_facilities.h"

// enter two integers and spits integers back in increasing value until non-integer such as '|' is enterred.
int main()
{
    int x = 0;
    int y = 0;
    cout << "Please enter two integers (program terminates upon receiving non-integer input): ";
    while (cin >> x >> y) {
        if (x <= y)
            cout << x << ", " << y << '\n';
        else {
            cout << y << ", " << x << '\n';
        }
    }
    return 0;
}
