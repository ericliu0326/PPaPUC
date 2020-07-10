// Chapter 17 Exercise 3
//

 /*
  Write a function, void to_lower(char* s), that replaces all uppercase characters
  in the C-style string s with their lowercase equivalents. For example, Hello, World!
  becomes hello, world!. Do not use any standard library functions. A C-style string
  is a zero-terminated array of characters, so if ou find a char with the value 0
  you are at the end.
 */


#include <iostream>
#include <string>

void to_lower(char* s)
{
    for (int i = 0; s[i]; ++i) {
        if ('A' <= s[i] && s[i] <= 'Z')
            s[i] -= 'A' - 'a';
    }
}

int main()
{
    std::string s = "Hello, World!";
    std::string ss = s;      // copy to avoid changing original string
    std::cout << ss << std::endl;
    
    char* p = &ss[0];
    to_lower(p);
    std::cout << p << std::endl;
}
