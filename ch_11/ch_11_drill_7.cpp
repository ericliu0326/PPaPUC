// Chapter 11 Drill 7
//

 /*
    Section 11 Drill 7
    Go back to 2 and cause your output to show the base for each output.
  
    drill 2 for reference:
  
    Section 11 Drill 2
    Output your birth_year in decimal, hexadecimal, and octal form.
 */


#include "../std_lib_facilities.h"

int main()
try
{
    int birth_year {1900};
    cout << showbase << "birth year in decimal: " << '\t' << birth_year << '\n'
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
