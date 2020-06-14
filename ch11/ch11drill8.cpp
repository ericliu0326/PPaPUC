// Chapter 11 Drill 8
//

 /*
    Try reading as octal, hexadecimal, etc.:
  
    cin >> a >> oct >> b >> hex >> c >> d;
    cout << a << '\t' << b << '\t' << c << '\t' << d << '\n';
  
    Run this code with the input
        1234 1234 1234 1234
    Explain the results.
 */


#include "../std_lib_facilities.h"

int main()
try
{
    int a, b, c, d;
    cout << "Please enter the number '1234' four times: \n";
    cin >> a >> oct >> b >> hex >> c >> d;
    cout << a << '\t' << b << '\t' << c << '\t' << d << '\n';
    // prints 1234    668    4660    4660
    // first prints in default decimal, then in oct, then in hex. Stickiness persists and prints in oct again.

    return 0;
}
catch(exception& e)
{
    cerr << e.what() << '\n';
    return 1;
}
catch(...)
{
    cerr << "Unknown exception!" << '\n';
    return 2;
}
