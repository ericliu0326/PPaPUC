// Chapter 11 Drill 6
//

 /*
    Section 11 Drill 5
    Now output your age.
  
    Section 11 Drill 6
    Was there a problem? What happened? Fix your output to decimal.
    // age was printed in octal (170 in decimal) due to stickiness of float form from cout
    // fixed by adding dec before the cout of age
 */


#include "../std_lib_facilities.h"

int main()
try
{
    int birth_year {1900};
    cout << "birth year in decimal: " << '\t' << birth_year << '\n'
    << "birth year in hexadecimal: " << '\t' << hex << birth_year << '\n'
    << "birth year in octal: " << '\t' << oct << birth_year << '\n';
    
    int current_year = 2020;
    int age = current_year - birth_year;
    cout << dec << age << endl;
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
