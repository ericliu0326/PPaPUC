// Chapter 10 Drill 5
//

 /*
  Close the ostream and then open an istream for mydata.txt.
  Read the data from mydata.txt and store it in a new vector
  called processed_points.
 */

 /*
  Program can be significantly improved in regards to exception handling.
  Currently, inputs must be exactly in the '('double','')' format ex: (1,1)
  or else program will fail.
 */

#include "../../std_lib_facilities.h"


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

istream& operator>>(istream& is, Point& p)
{
    double x, y;
    char ch1, ch2, ch3;

    is >> ch1 >> x >> ch2 >> y >> ch3;
    if (is && ch1 == '(' && ch2 == ',' && ch3 == ')')
        p = Point(x, y);
    else
        is.clear(ios_base::failbit);
    
    return is;
}

ostream& operator<<(ostream& os, const Point& a)
{
    return os << '(' << a.x()
                << ',' << a.y()
                << ')' << endl;
}

void fill_from_file(vector<Point>& points, const string& name)
{
    ifstream ist{name};
    if (!ist) error("can't open input file ", name);

    for (Point p; ist >> p;)
        points.push_back(p);
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
    
    ofstream file ("mydata.txt");
    
    cout << "The points inputted are as follows:\n";
    for (int i = 0; i<original_points.size(); ++i)
        cout << original_points[i];
    
    cout << "Writing data points to file 'mydata.txt\n";
    ofstream ost {"mydata.txt"};
    if (!ost) error("cannot open output file");
    for (Point a : original_points) {
        ost << a;
    }
    
    ost.close();
    
    cout << "Now saving file from mydata.txt into vector process_points.\n";
    vector<Point> processed_points;
    fill_from_file(processed_points, "mydata.txt");
    
//     test vector properly saved by printing out processed_points
    cout << "The points inputted are as follows:\n";
    for (int i = 0; i<processed_points.size(); ++i)
        cout << processed_points[i];
    
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
    
