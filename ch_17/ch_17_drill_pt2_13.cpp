// Chapter 17 Drill pt2 #13
//

 /*
  The second part focuses on pointers and their relations to arrays.
  Using print_array() from the last drill:
  
  1.  Allocate an int, initialize it to 7, and assign its address to a variable p1.
  2.  Print out the value of p1 and of the int it points to.
  3.  Allocate an array of seven ints; initialize it to 1, 2, 4, 8, etc.;
      and assign its address to a variable p2.
  4.  Print out the value of p2 and of the array it points to.
  5.  Declare an int* called p3 and initialize it with p2.
  6.  Assign p1 to p2.
  7.  Assign p3 to p2.
  8.  Print out the values of p1 and p2 and of what they point to.
  9.  Deallocate an all the memory you allocated from the free store.
  10. Allocate an array of ten ints; initialize to 1, 2, 4, 8, etc.; and
      assign its address to a variable p1.
  11. Allocate an array of ten ints, and assign its address to a variable p2.
  12. Copy the values from the array pointed to by p1 into the array pointed to by p2.
  13. Repeat 10-12 using a vector rather than an array.
 */


#include "../std_lib_facilities.h"

int main()
{
    vector<int>* p1 = new vector<int> {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
    vector<int>* p2 = new vector<int>(10);
    
    p2 = p1;

    cout << p1 << endl;
    cout << p2 << endl;
}
