// Chapter 9 drill 1
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
  
  1. The version from 9.4.1
  
 */

#include "../std_lib_facilities.h"

// simple Date
struct Date {
    int y;  // year
    int m;  // month in year
    int d;  // day of month
};

void init_day(Date& dd, int y, int m, int d)
{
    if(d < 1 || d > 31) error("Invalid day");
    if(m < 1 || m > 12) error("Invalid month");
    
    dd.y = y;
    dd.m = m;
    dd.d = d;
}

void add_day(Date&dd, int n)
{
    dd.d += n;
     
    while(dd.d < 1) {--dd.m; dd.d += 31;}
    while(dd.d > 31) {++dd.m; dd.d -= 31;}
    
    while(dd.m < 1) {--dd.y; dd.m += 12;}
    while(dd.m > 12) {++dd.y; dd.m -= 12;}
}

ostream& operator<<(ostream& os, const Date& d)
{
    return os << '(' << d.y
              << ',' << d.m
              << ',' << d.d << ')';
}

int main()
try
{
    Date today;
    init_day(today, 1978, 6, 25);
    
    Date tomorrow{today};
    add_day(tomorrow,1);
    
    std::cout << "today" << today << '\n';
    std::cout << "tomorrow" << tomorrow << '\n';
    
    Date Test{today};
    init_day(Test, 2004, 13, -5);
    std::cout << "Test" << Test << '\n';
    
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
