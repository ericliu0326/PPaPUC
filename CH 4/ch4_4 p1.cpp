//  ch 4.4 try this
//  C++


#include "std_lib_facilities.h"

// Program that converts yen, euros, and pounds into dollars. Using conversion rates as of 3/30.

int main()
{
    constexpr double yen_per_usd = 108.24;
    constexpr double euros_per_usd = .91;
    constexpr double pounds_per_usd = 1.23;
    
    double value = 1;
    
    char currency = 'a';
    cout << "Please enter the amount of currency you would like to be converted to US dollars followed by a currency ('y' for yen, 'e' for euro, and 'p' for pound):\n";
    cin >> value >> currency;
    
    if (currency == 'y')
        cout << value << "y is equal to $" << value*yen_per_usd << '\n';
    else if (currency == 'e')
        cout << value << "e is equal to $" << value*euros_per_usd << '\n';
    else if (currency == 'p')
        cout << value << "p is equal to $" << value*pounds_per_usd << '\n';
    else
        cout << "Sorry, I don't know the currency called " << currency << '\n';
}

