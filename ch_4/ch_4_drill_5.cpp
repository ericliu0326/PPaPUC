//  ch 4 drill #5
//  C++


#include "../std_lib_facilities.h"

// Enter two doubles and spits doubles back in increasing value until
// non-double such as '|' is entered. If doubles are equal it will indicate
// as such. Threshold of 1.0/100



int main()
{
    constexpr double threshold = 1.0/100;
    
    double x = 0;
    double y = 0;
    cout << "Please enter two numbers (program terminates upon receiving non-number inputs): ";
    while (cin >> x >> y) {
        if (x < y && abs(x-y) >= threshold)
            cout << x << ", " << y << '\n';
        else if (x > y && abs(x-y) >= threshold)
            cout << y << ", " << x << '\n';
        else if (abs(x - y) < threshold) {
            if (x > y)
                cout << "the numbers are almost equal " << x << " is larger than " << y << '\n';
            else
                cout << "the numbers are almost equal " << y << " is larger than " << x << '\n';
        }
        else
            cout << "the numbers are equal " << x << ", " << y << '\n';
    }
    return 0;
}



