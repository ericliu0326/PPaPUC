// Chapter 10 Drill 3
//

 /*
  Print the data in original_points to see what it looks like.
 */

 /*
  Program can be significantly improved in regards to exception handling.
  Currently, inputs must be exactly in the '('double','')' format ex: (1,1)
  or else program will fail.
 */

#include "std_lib_facilities.h"


class Point {
public:
    Point(double x, double y);
    Point();
    double x() const {return m_x;}
    double y() const {return m_y;}

private:
    double m_x;
    double m_y;
};

Point::Point(double x, double y)
: m_x{x}, m_y{y} { };

Point::Point()
: m_x{}, m_y{} { };

istream& operator>>(istream& is, Point& a)
{
    double x {}, y{};
    char open_parenthesis, comma, closed_parenthesis;
    is >> open_parenthesis >> x >> comma >> y >> closed_parenthesis;
    if (open_parenthesis != '(') error("bad format\n");    // fast initial
    if (comma!=',' || closed_parenthesis!=')') {   // check format
        error("bad format\n");
    }
    a = Point(x,y);
    return is;
}

ostream& operator<<(ostream& os, const Point& a)
{
    return os << '(' << a.x()
                << ',' << a.y()
                << ')' << endl;
}

constexpr int inputs_wanted {7};    // seeks 7 points
    
int main()
try
{
    vector<Point> original_points {};
    Point a;
    cout << "Please enter 7 points in the following format: i.e, (0,0)\n";
    while(original_points.size()<inputs_wanted) {
        if (cin >> a) {
            original_points.push_back(a);
        }
        else {
            cout << "That's not a point!\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
    
    cout << "The points inputted are as follows:\n";
    for (int i = 0; i<original_points.size(); ++i)
        cout << original_points[i];
    
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
    
