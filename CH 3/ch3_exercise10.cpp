//  ch3_10 exercises.cpp
//  C++


// Takes an operation followed by two operands and outputs the results.
#include "std_lib_facilities.h"

int main()
{
    cout << "Please enter an operation (i.e., '+') followed by two operands.\n";
    string operation {};
    double x, y;
    cin >> operation >> x >> y;
    if (operation == "add" || operation == "+" || operation == "plus")
        cout << x << " plus " << y << " is equal to " << x + y << '\n';
    else if (operation == "minus" || operation == "subtract" || operation == "-")
        cout << x << " minus " << y << " is equal to " << x - y << '\n';
    else if (operation == "multiply" || operation == "times" || operation == "*")
        cout << x << " multiplied by " << y << " is equal to " << x * y << '\n';
    else if (operation == "divide" || operation == "/")
        cout << x << " divided by " << y << " is equal to " << x / y << '\n';
    else
        cout << "Sorry! Do not recognize the operation\n";
    
    return 0;
}
