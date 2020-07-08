// Chapter 18 Exercise 1
//

 /*
  Write a function, char* strdup(const char*), that copies a C-style
  string into memory it allocates on the free store. Do not use any
  standard library functions. Do not use subscripting; use the dereference
  operator * instead.
 */

#include <iostream>

char* strdup(const char* p) {
    // size of p
    int size = 0;
    const char* r = p;
    while(*r++) ++size;

    char *p_copy = new char[size + 1];   // need size + 1 chars to store terminating zero

    // create pointer copy to iterate
    char* p_temp = p_copy;
    while(*p) *p_temp++ = *p++;
    *p_temp = 0;
    return p_copy;
}

void print_char_arr(const char* p) {
    if (p == 0) exit(1);
    while (*p) std::cout << *p++;
    std::cout << "\n";
}

int main()
{
    char p[] = "This is a sample char array";
    char* p_copy = strdup(p);
    print_char_arr(p_copy);

    delete[] p_copy;
}
