// Chapter 17 Drill pt2 #2
//

 /*
  The second part focuses on pointers and their relations to arrays.
  Using print_array() from the last drill:
  
  1. Allocate an int, initialize it to 7, and assign its address to a variable p1.
  2. Print out the value of p1 and of the int it points to.
 */


#include "../std_lib_facilities.h"

void print_array(ostream& os, int* a, int n)       // from ch17 drill pt 1 (unmodified)
{
    os << '{';
    for (int i = 0; i < n; i++) {
        os << a[i];
        if (i != n - 1) os << ", ";
    }
    os << '}' << endl;
}

int main()
{
    int* p1 = new int{7};
    
    cout << p1 << endl << *p1 << endl;
}
