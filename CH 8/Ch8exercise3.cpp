// Chapter 8 Exercise 3
//

/*
 Create a vector of Fibonacci numbers and print them using the function from exercise 2.
 To create the vector, write a function, fibonacci (x, y, v, n),
 where integers x and y are ints, v is an empty vector < int >,
 and n is the number of elements to put into v; v[0] will be x and v[1] will be y.
 A Fibonacci number is one that is part of a sequence where each element is the sum of the two previous ones.
 For example, starting with 1 and 2, we get 1, 2, 3, 5, 8, 13, 21, . . . .
 Your fibonacci() function should make such a sequence starting with its x and y arguments.
 */

#include "std_lib_facilities.h"

void print(const string& label, const vector<int>& v)
{
    std::cout << label << endl;
    for (int i = 0; i<v.size(); ++i) {
        std::cout << v[i];
        if(i < v.size()-1)
        std::cout << ", ";
    }
    std::cout << endl;
}


// Fib sequence with n elements starting with x and y into vector v.
void fibonacci(int x, int y, vector<int>& v, int n)
{
    v.push_back(x);
    v.push_back(y);
    int next = x+y;
    v.push_back(next);

    constexpr int start = 3;    // start = how many int already in vector
    
    for (int i = start; i < n; ++i) {     // check if int x/y works instead of i
        x = y;
        y = next;
        next = x + y;
        v.push_back(next);
    }
}

int main()
{
    int x{1};
    int y{2};
    vector<int> v{};
    int n{10};
    
    fibonacci(x, y, v, n);
    
    std::string label {"Fibonacci sequence starting with "
        + to_string(x) + ", " + to_string(y) + ": "};   // indicates starting fib numbers
    print(label, v);
    
    return 0;
}
