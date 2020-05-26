// Ch5exercise8.cpp
// Pretty similar to author solution; check for improvement

// Write a program that reads and stores a series of integers and then computes
// the sum of the first N integers. First ask for N, then read the values into
// a vector, then calculate the sum of the first N values. For example:
//
//  "Please enter the number of values you want to sum:"
//
//      3
//
//  "Please enter some integers (press '|' to stop):"
//
//      12 23 13 24 15 |
//
//  "The sum of the first 3 numbers ( 12 23 13 ) is 48."
//
// Handle all inputs. For example, make sure to give an error message if the
// user asks for a sum of more numbers than there are in the vector.

#include "std_lib_facilities.h"


int main()
try
{
    cout << "Please enter the number of values you want to sum: ";
    int values = -1;  // starting with negative number so invalid inputs can be detected
    cin >> values;
    if (values < 1) error("Number of elements must be an integer greater than 0\n");
    cout << "Please enter some integers (press '|' to stop): ";
    vector<int> integers;
    int inputs;
    
    while (cin >> inputs) {
        integers.push_back(inputs);
    }
    
    int sum = 0;
    if (integers.size()<values) error("Not enough integers enterred.\n");
    
    cout << "The sum of the first " << values << " number(s) ( ";
    for (int i = 0; i<values; ++i) cout << integers[i] << " ";
        cout << ") is/are ";
    for (int i = 0; i<values; ++i) {
        sum += integers[i];
    }
    cout << sum << ".\n";
}
catch (runtime_error e) {
    cout << e.what() << '\n';
    keep_window_open("~");
    return 1;
}
catch (...) {
    cerr << "Oops: unknown exception!\n";
    keep_window_open("~");
    return 2;
}
