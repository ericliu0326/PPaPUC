//
//  ch_3.5_try_this.cpp
// C++

#include "../std_lib_facilities.h"

// read and compare names
int main()
{
    string previous = " ";
    string current;
    while (cin >> current) {
        if (previous == current)
            cout << "repeated words: " << current << '\n';
        previous = current;
    }
}

