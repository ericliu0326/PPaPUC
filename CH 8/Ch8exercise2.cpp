// Chapter 8 exercise 1
//

// Write a function print() that prints a vector of ints to cout. Give it two arguments: a string for "labeling" the output and a vector.
 

#include "std_lib_facilities.h"

void print(const string& label, const vector<int>& v)
{
    std::cout << label << endl;
    for (int i : v)
        std::cout << i << endl;
}

int main()
{
    std::string label {"Vector data: "};
    vector<int> v {1,3,4,2,5,7,9,1};    // sample set of vector of ints
    print(label, v);
    
    return 0;
}
