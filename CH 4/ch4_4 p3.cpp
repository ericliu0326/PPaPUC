//  ch 4.4 try this pt 3
//  C++


#include "std_lib_facilities.h"

// Loop to write out a table of characters with their corresponding integer values:
// a    97
// b    98
// ...
// z    122

int main()
{
    char letter = 'a';
    while (letter <= 'z') {
        cout << letter << '\t' << int (letter) << "\n";
        ++letter;
    }
}

