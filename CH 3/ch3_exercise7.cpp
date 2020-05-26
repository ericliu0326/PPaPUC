//
//  ch3_7 exercises.cpp
//  C++


#include "std_lib_facilities.h"

// orders string inputs in alphabetical sequence

int main()
{
    cout << "Please enter three strings.\n";
    string string1{}, string2{}, string3{};
    if (!(cin >> string1 >> string2 >> string3)){
        simple_error("Invalid entry");
    }
    
    if (string1 <= string2 && string1 <= string3) {
        cout << string1 << ", ";
        if (string2 <= string3)
            cout << string2 << ", " << string3 << '\n';
        else
            cout << string3 << ", " << string2 << '\n';
        }
    if (string2 <= string1 && string2 <= string3) {
        cout << string2 << ", ";
        if (string1 <= string3)
            cout << string1 << ", " << string3 << '\n';
        else
            cout << string3 << ", " << string1 << '\n';
    }
    else if (string3 <= string1 && string3 <= string2)
    {
        cout << string3 << ", ";
        if (string1 <= string2)
            cout << string1 << ", " << string2 << '\n';
        else
            cout << string2 << ", " << string1 << '\n';
    }
}

