// Chapter 17 Drill pt2 #3
//

 /*
  The second part focuses on pointers and their relations to arrays.
  Using print_array() from the last drill:
  
  1. Allocate an int, initialize it to 7, and assign its address to a variable p1.
  2. Print out the value of p1 and of the int it points to.
  3. Allocate an array of seven ints; initialize it to 1, 2, 4, 8, etc.;
     and assign its address to a variable p2.
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
    
    int* p2 = new int[7] {1, 2, 4, 8, 16, 32, 64};    
}
