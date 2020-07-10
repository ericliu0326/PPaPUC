// Chapter 18 Drill Pt2 - 4
//

 /*
  Standard library vector drill:
  1. Define a global vector<int> gv; initialize it with ten ints
     1, 2, 4, 8, 16, etc.
  2. Define a function f() taking a vector<int> argument
  3. In f():
        a. Define a local vector<int> lv with the same number
           of elements as the argument vector.
        b. Copy the values from gv into lv.
        c. Print out the elements of lv.
        d. Define a local vector<int> lv2; initialize it to be
           a copy of the argument vector.
        e. Print out the elements of lv2.
  4. In main():
        a. Call f() with gv as its argument.
        b. Define a vector vv, and initialize it with the first
           ten factorial values (1, 2*1, 3*2*1, 4*3*2*1, etc.)
        c. Call f() with vv as its argument.
 */


#include "../std_lib_facilities.h"

vector<int> gv {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};

void f(vector<int> v)
{
    vector<int> lv {gv}; // Copy gv into lv
    
    for(int i = 0; i < lv.size(); i++) {    // print out elements in vector
        if (i != lv.size() -1) {
            std::cout << lv[i] << ", ";
        }
        else {
            std::cout << lv[i] << std::endl;
        }
    }
    
    vector<int> lv2 {v};    // Copy argument vector into lv2
    
    for(int i = 0; i < lv2.size(); i++) {    // print out elements in vector
        if (i != lv2.size() -1) {
            std::cout << lv2[i] << ", ";
        }
        else {
            std::cout << lv2[i] << std::endl;
        }
    }
}


int main()
{
    f(gv);
    
    vector<int> vv {};
    for (int i = 0; i < 10; i++) {  // 10 factorials to push in
        int j = i + 1;  // start factorial at 1, iterating through 10
        int fact = 1;

        while (j != 1) {
            fact *= j;
            j--;
        }
        vv.push_back(fact);
    }
    
    f(vv);
}
