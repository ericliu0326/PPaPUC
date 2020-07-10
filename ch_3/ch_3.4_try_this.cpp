//
// ch_3.4_try_this.cpp
// C++


#include <iostream>
#include "../std_lib_facilities.h"

int main()      //C++ starts program by executing the function main
{
    cout << "Please enter two non-negative integers ";
    int n;
    int o;
    cin >> n >> o;
    cout << "n == " << n
    << "\nn+1 == " << n+1
    << "\nthree times n == " << 3*n
    << "\ntwice n == " << n+n
    << "\nn squared == " << n*n
    << "\nhalf of n == " << n/2
    << "\nsquare root of n == " << sqrt(n)
    << "\nmodulo 10 of n == " << n%10
    << "n/o * o + n%o is equal to n == " << n/o*o+n%o
    << boolalpha << "\nn is greater than 10 == " << (n>10)
    << '\n';
}
