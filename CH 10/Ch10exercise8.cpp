// Chapter 10 Exercise 8
//

 /*
  Write a program that accepts two file names and produces
  a new file that is the contents of the first file followed
  by the contents of the second; that is the program
  concatenates the two files.
 */

/* Comment: Currently program does not format data nor process whitespace.
 Combined file results in unformatted no whitespace new file.
 Will revist to develop formatted output file.
 */


#include "../std_lib_facilities.h"

const string ofile_name {"otest.txt"};     // name of output file to be written

int main()
try
{
    string file1;
    string file2;
    
    cout << "Please enter name of file 1:\n";
    cin >> file1;
    cout << "Please enter the name of file 2:\n";
    cin >> file2;
    
    ifstream ist {file1};
    if(!ist) error("Cannot open file1\n");
        
    string contents {};
    
    for (string s; ist >> s;) {
        if(ist.fail()) error("Failure to read inputs in file\n");   // throwing exception for fail-bit
        if(ist.bad()) error("error - badbit\n");
        contents += s;
    }
        
    ifstream ist2 {file2};
    if(!ist2) error("Cannot open file2\n");
    
    for (string s; ist2 >> s;) {
        if(ist2.fail()) error("Failure to read inputs in file\n");   // throwing exception for fail-bit
        if(ist2.bad()) error("error - badbit\n");
        contents += s;
    }

    cout << "The contents of the previous 2 files provided will be stored in " << ofile_name << '\n';
    ofstream ost {ofile_name};
    ost << contents;
    
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
