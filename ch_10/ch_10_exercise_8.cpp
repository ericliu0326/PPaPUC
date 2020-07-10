// Chapter 10 Exercise 8
//

 /*
  Write a program that accepts two file names and produces
  a new file that is the contents of the first file followed
  by the contents of the second; that is the program
  concatenates the two files.
 */



#include "../std_lib_facilities.h"

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
        
    string contents {};     // store both files in string
    
    char c;
    ist >> noskipws;    // reads whitespace and new lines
    while (ist >> c){
        if(ist.fail()) error("Failure to read inputs in file\n");   // throwing exception for fail-bit
        if(ist.bad()) error("error - something went werong!\n");
        contents += c;
    }

    ifstream ist2 {file2};
    if(!ist2) error("Cannot open file2\n");

    ist2 >> noskipws;       // reads whitespace and new lines
    while (ist2 >> c){
        if(ist2.fail()) error("Failure to read inputs in file\n");   // throwing exception for fail-bit
        if(ist2.bad()) error("error - badbit\n");
        contents += c;
    }

    cout << "Please provide the name of the file you would like to store the file in:\n";
    string ofile_name;
    cin >> ofile_name;      // name of file to be written in
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
