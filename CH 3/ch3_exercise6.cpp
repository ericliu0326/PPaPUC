//
//  ch3_6 exercises.cpp
//  C++



#include "std_lib_facilities.h"

// orders numeric inputs in numerical sequence

int main()
{
    cout << "Please enter three integer values.\n";
    int val1{}, val2{}, val3{};
    if (!(cin >> val1 >> val2 >> val3)){
        simple_error("Invalid entry");
    }
    
    if (val1 <= val2 && val1 <= val3) {
        cout << val1 << ", ";
        if (val2 <= val3)
            cout << val2 << ", " << val3 << '\n';
        else
            cout << val3 << ", " << val2 << '\n';
        }
    if (val2 <= val1 && val2 <= val3) {
        cout << val2 << ", ";
        if (val1 <= val3)
            cout << val1 << ", " << val3 << '\n';
        else
            cout << val3 << ", " << val1 << '\n';
    }
    else if (val3 <= val1 && val3 <= val2)
    {
        cout << val3 << ", ";
        if (val1 <= val2)
            cout << val1 << ", " << val2 << '\n';
        else
            cout << val2 << ", " << val1 << '\n';
    }
}
