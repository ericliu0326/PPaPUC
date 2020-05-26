// Chapter 9 drill 3
//

 /*
  This drill simply involves the sequence of versions of Date to work.
  For each version define Date called today initialized to June 25, 1978.
  Then, define a Date called tomorrow and give it a value by coping today
  into it and increasing its day by using add_day().
  Finally, output today and tomorrow using a << defined as in 9.8.
  
  Your check for a valid date may be very simple.
  Feel free to ignore leap years.
  However, don't accept a month that is not in the [1,12] range or day of the month that is not in the [1,31] range.
  Test each version with at least one invalid date (e.g., 2004,13,-5).
  
  3. The version from 9.4.3
  
 */

#include "std_lib_facilities.h"

// simple Date
class Date {
    int y, m, d;
public:
    Date(int yy, int mm, int dd);
    void add_day(int n);
    int month() const {return m;}
    int day() const {return d;}
    int year() const {return y;}
};

Date::Date(int yy, int mm, int dd)
{
    if(dd < 1 || dd > 31) error("Invalid day");
    if(mm < 1 || mm > 12) error("Invalid month");
    
    y = yy;
    m = mm;
    d = dd;
}

void Date::add_day(int n)
{
    d += n;
     
    while(d < 1) {--m; d += 31;}
    while(d > 31) {++m; d -= 31;}
    
    while(m < 1) {--y; m += 12;}
    while(m > 12) {++y; m -= 12;}
}

ostream& operator<<(ostream& os, const Date& d)
{
    return os << '(' << d.year()
              << ',' << d.month()
              << ',' << d.day() << ')';
}

int main()
try
{
    Date today{1978, 6, 25};
    
    Date tomorrow{today};
    tomorrow.add_day(1);
    
    std::cout << "today" << today << '\n';
    std::cout << "tomorrow" << tomorrow << '\n';
    
    // Date Test{2004, 13, -5};     // test to make sure invalid is working
    // std::cout << "Test" << Test << '\n';
    
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
    
// note:
// dates are not completely accurate due to 31 day each month assumption
