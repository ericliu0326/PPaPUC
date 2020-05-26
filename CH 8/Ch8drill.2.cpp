// Ch8drill
// Ch8drill.2.cpp
//



#include "std_lib_facilities.h"


void swap_v(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    std::cout << "after swap_v; a: " << a << ", b: " << b << endl;
}

void swap_r(int& a, int& b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    std::cout << "after swap_r; a: " << a << ", b: " << b << endl;

}

/*
 // cannot assign to a constant
 
void swap_cr(const int& a, const int& b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
*/

int main()
{
    int x = 7;
    int y = 9;
    std::cout << "x = " << x << ", y = " << y << endl;
    swap_v(x,y);
    swap_r(x,y);
    // swap_cr(x,y);    // cannot change constants
    std::cout << "x is now = " << x << " and y is now = " << y << endl << endl;

    swap_v(7,9);    // compiles and swap but variables are unchanged
    // swap_r(7,9);    // needs a variable to refer to
    // swap_cr(7,9);    cannot change constants
    std::cout << endl;

    const int cx = 7;
    const int cy = 9;
    std::cout << "cx = " << cx << ", cy = " << cy << endl;
    
    swap_v(cx, cy);     // swaps because copies of constants can change
                        // constant itself are not changing
    // swap_r(cx, cy);     // cannot use const for non-const ref
    // swap_cr(cx, cy);     // cannot change constants
    std::cout << "cx is now = " << cx << ", cy is now = " << cy << endl << endl;
        // not swapped because only copy was changed

    swap_v(7.7,9.9); // compiles and swaps, but double is truncated to int
    // swap_r(7.7,9.9)     // needs a variable to refer to
    // swap_cr(7.7,9.9)     // cannot change constants in pass-by-const
    std::cout << endl;
    
    double dx = 7.7;
    double dy = 9.9;
    std::cout << "dx = " << dx << ", dy = " << dy << endl;

    swap_v(dx, dy);      // swap but truncates due to narrowing
        // temp memory swap destroyed
    // swap_r(dx, dy);     // cannot convert double to int&
    // swap_cr(dx, dy);     // cannot change constants in pass-by-const
    std::cout << "dx is now = " << dx << ", dy is now = " << dy << endl << endl;
    
    swap_v(7.7, 9.9);    // swaps but truncates to int.
    // swap_r(7.7, 9.9);   // cannot convert double to int&
    // swap_cr(7.7, 9.9);     // cannot change constants in pass-by-const
    std::cout << endl;
    
}
