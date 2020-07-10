// Chapter 18.5 Try This
//

 /*
  Make a version of this vector that is complete enough to compile and see what
  error message your compiler produces for v[3] = x
 */

#include <iostream>

class vector {
    int sz;      // the size
    double* elem;   //a pointer to the elements
public:
    vector(int s)
    :sz{s}, elem{new double[s] }
    {
        for (int i = 0; i < sz; ++i) elem[i] = 0.0;
    }
    ~vector()
        { delete[] elem; }
    double operator[](int n) { return elem[n]; }
};

int main()
{
    vector v(10);
    double x = v[2];
    v[3] = x;   // compiler error message: 'Expression is not assignable'
                // v[3] is not a Lvalue
}
