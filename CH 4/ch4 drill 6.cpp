//  ch 4 drill #6
//  C++


#include "std_lib_facilities.h"

// Enter a number and spits it back out.  If number is the largest or smallest enterred so far (after 1st iteration) it will indicate as such.



int main()
{
    double x = 0;
    double smallest = 0;
    double largest = 0;
    
    // prompts user for a number and stores the first number as smallest and largest
    cout << "Please enter a number: ";
    cin >> x;
    smallest = x;
    largest = x;
    
    while (cin >> x) {
        if (x < smallest) {
            smallest = x;
            cout << x << " smallest\n";
        }
        if (x > largest) {
            largest = x;
            cout << x << " largest\n";
        }
        else {
            cout << x << '\n';
        }
    }
    return 0;
}

