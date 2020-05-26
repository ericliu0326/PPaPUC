//  ch3_8 exercises.cpp
//  C++


// determines if inputted integer is even or odd
#include "std_lib_facilities.h"

int main()
{
    cout << "Provide an integer\n";
    int i {};
    if (!(cin >> i)){
        simple_error("Invalid entry");
    }
    if (i%2 == 0) {
        cout << "The value " << i << " is an even number.\n";
    } else {
            cout << "The value " << i << " is an odd number.\n";
        }
}
