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
  
  Significant room in structure. Can split checking and verification into separate functions
 */

#include "../std_lib_facilities.h"


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
    if (!is) return is;
    if (open_parenthesis != '(' || comma!=',' || closed_parenthesis!=')') {   // check format
        is.clear(ios_base::failbit);
        return is;
    }
    
    // room for improvement: can add check for failbits
    // aside from initial parenthesis, comma, and double check
    else if (is.bad()) error("bad format");
    else if (is.eof()) { }
    else {
        a = Point(x,y);
    }
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
    ifstream ist {"mydata.txt"};
    if (!ist) error("cannot open input file");
    
    vector<Point> processed_points;
    
    for(Point a; ist >> a;) {
        processed_points.push_back(a);
    }
    
//  test if vector properly saved by printing out processed_points
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
    
