// Chapter 11 Drill 9
//

 /*
    Write some code to print the number 1234567.89 three times,
    first using defaultfloat, then fixed, then scientific forms.
    Which output presents the user with the most accurate representation?
    Explain why.
 */


#include "../std_lib_facilities.h"

int main()
try
{
    cout << 1234567.89 << '\t'
        << fixed << 1234567.89 << '\t'
        << scientific << 1234567.89 << '\n';
    // seems like fixed provides the output form most accurate to the input given.
    
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
