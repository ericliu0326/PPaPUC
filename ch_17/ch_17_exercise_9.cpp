// Chapter 17 Exercise 9
//

 /*
  Which way does the stack grow: up (toward higher addresses) or down (toward lower addresses)?
  Which way does the free store initially grow (that is, before you use delete)?
  Write a program to determine the answers.
 */


#include <iostream>
#include <string>

int main()
{
    int x = 10;
    int y = 100;    // stack memory grows towards lower addresses
    
    int *ptr = new int;
    int *ptr2 = new int;    // free store grows towards higher address
    
    std::cout << "memory address of x: " << &x << std::endl << "memory address of y: " << &y << std::endl;
    std::cout << "memory address of ptr: " << ptr << std::endl << "memory address of ptr2: " << ptr2 << std::endl;
    
    return 0;
}


