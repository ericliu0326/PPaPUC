// Chapter 10 Drill 1
//

 /*
  Start a program to work with points, discussed in 10.4.
  Begin by defining the data type Point that has two coordinate members x and y.
 */

#include "../std_lib_facilities.h"


class Point {
public:
    double x;
    double y;
};

ostream& operator<<(ostream& os, const Point& a)
{
    return os << '(' << a.x
                << ',' << a.y
                << ')' << endl;
}

int main()
try
{
    Point a{2.1, 3.0};
    cout << a;
    
    return 0;
}
catch(exception& e)
{
    cerr << e.what() << '\n';
    return 1;
}
catch(...)
{
    cerr << "Unknown exception!!\n";
    return 2;
}
    
