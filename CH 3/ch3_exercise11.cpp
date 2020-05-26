//  ch3_11 exercises.cpp
//  C++


// Takes an operation followed by two operands and outputs the results.
#include "std_lib_facilities.h"

int main()
{
    cout << "How many pennies do you have?\n";
    int pennies {};
    cin >> pennies;
    if (pennies > 1 || pennies == 0)
        cout << "You have " << pennies << " pennies.\n";
    else if (pennies == 1)
        cout << "You have " << pennies << " penny.\n";
        
    cout << "How many nickels do you have?\n";
    int nickels {};
    cin >> nickels;
    if (nickels > 1 || nickels == 0)
        cout << "You have " << nickels << " nickels.\n";
    else if (nickels == 1)
        cout << "You have " << nickels << " nickel.\n";
 
    cout << "How many dimes do you have?\n";
    int dimes {};
    cin >> dimes;
    if (dimes > 1 || dimes == 0)
        cout << "You have " << dimes << " dimes.\n";
    else if (dimes == 1)
        cout << "You have " << dimes << " dime.\n";
    
    cout << "How many quarters do you have?\n";
    int quarters{};
    cin >> quarters;
    if (quarters > 1 || quarters == 0)
        cout << "You have " << quarters << " quarters.\n";
    else if (quarters == 1)
        cout << "You have " << quarters << " quarter.\n";
    
    double total;
    total = pennies * 0.01 + nickels * 0.05 + dimes * 0.1 + quarters * .25;
    cout << "The value of all your coins is $" << total << '\n';
}
