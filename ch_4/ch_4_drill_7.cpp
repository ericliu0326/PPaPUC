//  ch 4 drill #7
//  C++


#include "../std_lib_facilities.h"

// Prompts user for a value with a unit.  It will convert all values
// to equivalent value in centimeters and determine the largest & smallest input.


double cm_conversion(double val, string units);

int main()
{
    double x = 0;
    cout << "Please enter a number: ";
    cin >> x;
    cout << "Please enter a unit (i.e., 'cm', 'm', 'in', 'ft')\n";
    string unit = " ";
    cin >> unit;
    
    double largest = cm_conversion(x, unit);
    double smallest = cm_conversion(x, unit);
    cout << cm_conversion(x, unit) << " cm ";
    cout << "Please enter a number followed by a unit (i.e., 10 cm).\n The valid units are as follows: cm, m, in, and ft. \n";

    
    while (cin >> x >> unit) {
        if (cm_conversion(x, unit) < smallest) {
            smallest = cm_conversion(x, unit);
            cout << cm_conversion(x, unit) << " cm smallest\n";
        }
        if (cm_conversion(x, unit) > largest) {
            largest = cm_conversion(x, unit);
            cout << cm_conversion(x, unit) << " cm largest\n";
        }
        else if (cm_conversion(x, unit) > smallest && cm_conversion(x, unit) < largest) {
            cout << cm_conversion(x, unit) << " cm\n";
        }
        cout << "Please enter a number followed by a unit (i.e., 10 cm).\n The valid units are as follows: cm, m, in, and ft. \n";
    }
    return 0;
}

// function that takes a value followed by unit and converts to cm
double cm_conversion(double val, string units)
{
    constexpr double m_to_cm = {100};
    constexpr double in_to_cm = {2.54};
    constexpr double ft_to_cm = {12*2.54};
    
    double convert {val};
    
    if (units == "m")
        convert *= m_to_cm;
    else if (units == "in")
        convert *= in_to_cm;
    else if (units == "ft")
        convert *= ft_to_cm;
    else if (units == "cm")
        convert = val;
    else
        cout << "Invalid unit\n";
    return convert;
}
