// Ch5exercise1.cpp
//
// fix code below

/*
double ctok(double c)
{
    int k = c + 273.15;
    return int
}
int main()
{
    double c = 0;
    cin >> d;                       // retrieve temperature to input variable
    double k = ctok("c");           // convert temperature
    Cout << k << '/n' ;             // print out temperature
}
*/

/* errors:
 1. missing header file
 2. ctok() returns a double despite the function using an integer
 3. missing semi-colon and fails to return desired output
 4. repetitive code and taking incorrect user input
 5. using forward slash instead of backslash in cout
 6. Cout not defined
 7. ctok() function used incorrectly
 8. not checking invalid inputs (left as-is for purposes of this example
 */

#include "std_lib_facilities.h"



double ctok(double c)
{
    double k = c + 273.15;
    return k;
}

int main()
{
    double c = 0;
    cin >> c;
    cout << ctok(c) << "\n";
}
