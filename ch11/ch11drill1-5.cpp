// Chapter 11 Drill 1-5
//

 /*
    Section 11 Drill 1
    Start a program called Test_output.cpp. Declare an integer birth_year and
    assign it the year you were born.
    
    Section 11 Drill 2
    Output your birth_year in decimal, hexadecimal, and octal form.
  
    Section 11 Drill 3
    Label each value with the name of the base used.
  
    Section 11 Drill 4
    Did you line up your output in columns using the tab character? If not, do it.
  
    Section 11 Drill 5
    Now output your age.
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
    cout << age << endl;
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
