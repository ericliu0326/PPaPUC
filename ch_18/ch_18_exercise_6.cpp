// Chapter 18 Exercise 6
//

 /*
  Modify cat_dot() from the previous exercise to take a string to be used as
  the separator (rather than dot) as its third argument
 */

#include <iostream>


// Concatenate two strings with third string in between.
std::string cat_dot(const std::string& s1, const std::string& s2, const std::string& s3) {
    return s1 + s3 + s2;
}

int main()
{
    std::string s3 = "-CONNECTOR-";
    
    std::cout << cat_dot("Niels", "Bohr", s3) << std::endl;;
}
