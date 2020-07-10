// Chapter 17 Drill 10
//

 /*
  This drill has two parts. The first exercises/builds your
  understanding of free-store allocated arrays and contrasts arrays
  with vectors:
  
  1.  Allocate an array of ten ints on the free store using new.
  2.  Print the values of the ten ints to cout.
  3.  Deallocate the array (using delete[]).
  4.  Write a function print_array10(ostream& os, int* a) that prints
      out the values of a (assumed to have ten elements) to os.
  5.  Allocate an array of ten ints on the free store;
      initialize it with the values 100, 101, 102, etc.; and print out its values.
  6.  Allocate an array of 11 ints on the free store; initialize it with the values
      100, 101, 102, etc.; and print out its values.
  7.  Write a function print_array(ostream& os, int* a, int n) that prints out the values
      of a (assumed to have n elements) to os.
  8.  Allocate an array of 20 ints on the free store; initialize it with the values
      100, 101, 102, etc.; and print out its values
  9.  Did you remember to delete the arrays? (If not, do it).
  10. Do 5, 6 and 8 using a vector instead of an array and a print_vector() instead of
      print_array().
 */


#include "../std_lib_facilities.h"

void print_vector(ostream& os, vector<int> v)
{
    os << '{';
    for (int i = 0; i < v.size(); i++) {
        os << v[i];
        if (i != v.size() - 1) os << ", ";
    }
    os << '}' << endl;
}

int main()
{
    vector<int> ten_ints {100, 101, 102, 103, 104, 105, 106, 107, 108, 109};
    vector<int> eleven_ints {100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110};
    vector<int> twenty_ints {100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119};
    
    print_vector(cout, ten_ints);
    print_vector(cout, eleven_ints);
    print_vector(cout, twenty_ints);

}
