// ch_6_exercise_9.cpp

/*
Write a program that reads digits and composes them into integers. For example, 123 is read as the characters 1, 2, 3. The program should output 123 is 1 hundred and 2 tens and 3 ones.
The number should be output as an int value. Handle with one, two, three, or four digits. Hint: To get the integer value 5 from the character '5' subtract '0', that is '5'-'0'==5.

 */

#include "../std_lib_facilities.h"


// Function to convert vector of chars into integer*
int conversion(vector<char> c)  // converts digits to units
{
    int sum = 0;
    for(int i = 0; i<c.size(); ++i)
    {
        int j = (c[i] - '0') * pow(10, c.size()-i-1);
        sum += j;
    }
    return sum;
}

int main()
try
{
    vector<char> number {};
    vector<string> unit {};
    
    unit.push_back(" ones ");
    unit.push_back(" tens ");
    unit.push_back(" hundreds ");
    unit.push_back(" thousands ");
    
    char digits;

    cout << "Please enter a number that has " << unit.size() << " or less digits followed by a equal sign.\n";
    // take inputs of 4 or less digits
    while(cin >> digits) {
        if(digits < '0' || digits > '9') break;     // any non-digit exits the while loop
        number.push_back(digits);
    }
    
    if (number.size() > unit.size()) error("Please enter a valid number with 4 or less digits.\n");
    int buffer = int(number.size()-1);
    
    for(int i = 0; i < number.size(); ++i)
    cout << number[i] << unit[buffer-i];
    cout << "which is equal to " << conversion(number) << endl;
    keep_window_open("~");
}
catch (runtime_error e) {
    cout << e.what() << '\n';
    keep_window_open("~");
}
catch (...) {
cout << "exiting\n";
keep_window_open("~");
}

