// Chapter 17.3.1 Try This
//

 /*
    Execute the example above and see what you get.
    Then extend the example to determine the size of
    bool, double, and some other type
 */


#include "../std_lib_facilities.h"

void sizes(char ch, int i, int* p, bool b, double d)
{
    cout << "the size of char is " << sizeof(char) << ' ' << sizeof(ch) << '\n';
    cout << "the size of int is " << sizeof(int) << ' ' << sizeof(i) << '\n';
    cout << "the size of int* is " << sizeof(int*) << ' ' << sizeof(p) << '\n';
    cout << "the size of bool is " << sizeof(bool) << ' ' << sizeof(b) << '\n';
    cout << "the size of double is " << sizeof(double) << ' ' << sizeof(d) << '\n';

}

int main()
{
    char c = '2';
    int i = 2;
    int* p = &i;
    bool b = true;
    double d = 2.0;
    sizes(c, i, p, b, d);
}
