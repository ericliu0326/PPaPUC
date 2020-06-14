// Chapter 11.2.1 Try This
//

 /*
  Output your birth year in decimal, hexadecimal, and octal form.
  Label each value. Line up your output in columns using the tab
  character. Now output your age.
 */

// Using birth year 1900
// Using age 120

#include "../std_lib_facilities.h"

int main()
try
{
    int year = 1900;
    int age = 120;
    
    // print year in decimal, hex, and oct
    cout << year << '\t' << hex << year << '\t' << oct << year << endl;
    
    // print age will be in oct due to sticky style
    cout << age << endl;
    
}
catch(exception& e)
{
    cerr << e.what() << '\n';
    return 1;
}
catch(...)
{
    cerr << "Unknown exception!\n";
    return 2;
}
