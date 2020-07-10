// Chapter 10 Exercise 1
//

 /*
  Write a program that produces the sum of all the numbers in a file of white-space-separated integers.
 */


#include "../std_lib_facilities.h"
    
int main()
try
{
    string file_name;
    
    cout << "Please enter name of file with white-spaced separated integers:\n";
    cin >> file_name;
    ifstream file {file_name};
    
    double sum = 0;
    
    if (!file) error("File could not be opened\n");
        
    for (double i; file >> i;) {
        if(file.fail()) error("Failure to read inputs in file\n");   // throwing exception for fail-bit
        if(file.bad()) error("error - badbit\n");
        sum+=i;
    }
    cout << "Sum of numbers is: \n" << sum << endl;
    
    return 0;
}
catch(exception& e)
{
    cerr << e.what() << '\n';
    return 1;
}
catch(...)
{
    cerr << "Unknown exception!!\n";
    return 2;
}
