// Chapter 17 Drill 1
//

 /*
  This drill has two parts. The first exercises/builds your
  understanding of free-store allocated arrays and contrasts arrays
  with vectors:
  
  1. Allocate an array of ten ints on the free store using new.
 */


#include "../std_lib_facilities.h"


int main()
{
    int* ptr = new int[10] {0,1,2,3,4,5,6,7,8,9};
}
