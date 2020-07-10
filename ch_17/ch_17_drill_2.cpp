// Chapter 17 Drill 2
//

 /*
  This drill has two parts. The first exercises/builds your
  understanding of free-store allocated arrays and contrasts arrays
  with vectors:
  
  1. Allocate an array of ten ints on the free store using new.
  2. Print the values of the ten ints to cout.
 */


#include "../std_lib_facilities.h"


int main()
{
    int* ptr = new int[10] {0,1,2,3,4,5,6,7,8,9};
    
    for (int i = 0; i < 10; i++)
    {
        cout << ptr[i] << endl;
    }
}
