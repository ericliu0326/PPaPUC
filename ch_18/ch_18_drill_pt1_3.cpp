// Chapter 18 Drill Pt 1 - 3
//

 /*
  Array drill:
  1. Define a global int array ga of ten ints initialized to 1, 2, 4, 8, 16, etc.
  2. Define a function f() taking an int array argument and an int argument
  indicating the number of element in the array.
  3. In f():
        a. Define a local int array la of ten ints
        b. Copy the values from ga into la.
        c. Print out the elements of la.
        d. Define a pointer p to int and initialize it with an array allocated on
           the free store with the same number of elements as the argument array.
        e. Copy the values from the argument array into the free-store array.
        f. Print out the elements of the free-store array.
        g. Deallocate the free-store array.
 */


#include "../std_lib_facilities.h"

int sz = 10;
int ga[10] {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};

void f(int x[], int n)
{
    int la[10];
    for (int i = 0; i < 10; ++i) la[i] = ga[i];     // copy ga array into la array
    
    for (int i = 0; i < 10; ++i) {  // print out la array
        if (i != 9) {
            std::cout << la[i] << ", ";
        }
        else {
            std::cout << la[i] << std::endl;
        }
    }
    
    int *p = new int [n];   // allocate free store memory for new array of ints
    int *p1 = p;    // create copy to keep original pointer address constant
    
    for (int i = 0; i < n; i++) {   // copy argument array to free-store array
        *p1 = x[i];
        p1++;
    }

    p1 = p;    // reset p1 to original array position
    int i = 0;
    while (i < n) {   // print all n elements in array
        if (i != n - 1) {
            std::cout << *p1 << ", ";
        }
        else {
            std::cout << *p1 << std::endl;
        }
        p1++;
        i++;
    }
    delete[] p;     // deallocate free-store array
}

// Commented out main. Can test drill by uncommenting below

//int main()
//{
//    f(ga, sz);
//}
