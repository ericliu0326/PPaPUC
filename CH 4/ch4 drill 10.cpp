//  ch 4 drill #10
//  C++


#include "std_lib_facilities.h"

// Prompts user for a value with a unit.  It will convert all values to equivalent value in meters and determine the largest & smallest input.
// rejects values without units or with units besides cm, m, in, ft.
// at end of loop will output the smallest and largest valid values enterred.


double m_conversion(double val, string units);

int main()
{
    double x = 0;
    cout << "Please enter a number: ";
    cin >> x;
    cout << "Please enter a unit (i.e., 'cm', 'm', 'in', 'ft')\n";
    string unit = " ";
    cin >> unit;
    
    double largest = m_conversion(x, unit);
    double smallest = m_conversion(x, unit);
    double sum = m_conversion(x, unit);
    cout << m_conversion(x, unit) << " m \n";
    cout << "Please enter another number followed by a unit (i.e., 10 m).\n The valid units are as follows: cm, m, in, and ft. \n";

    vector<double> values;
    while (cin >> x >> unit) {
        values.push_back(m_conversion(x, unit));
        if (m_conversion(x, unit) < smallest) {
            smallest = m_conversion(x, unit);
            cout << m_conversion(x, unit) << " m smallest\n";
        }
        else if (m_conversion(x, unit) > largest) {
            largest = m_conversion(x, unit);
            cout << m_conversion(x, unit) << " m largest\n";
        }
        else if (m_conversion(x, unit) > smallest && m_conversion(x, unit) < largest) {
            cout << m_conversion(x, unit) << " m\n";
        }
        else
            cout << "Please enter a number followed by a unit (i.e., 10 m).\n The valid units are as follows: cm, m, in, and ft. \n";
    }
    
    for (int y : values) sum += y;
        cout << "smallest is " << smallest << "m" << "; largest is " << largest << "m;" << " sum of all inputs is " << sum << "m\n";
    cout << "list of inputs converted into meters is as follows: \n";
    for (int i = 0; i < values.size(); ++i)
        cout << values[i] << "\n";
    return 0;
}

// function that takes a value followed by unit and converts to m
double m_conversion(double val, string units)
{
    constexpr double cm_to_m = {0.01};
    constexpr double in_to_m = {0.0254};
    constexpr double ft_to_m = {0.3048};
    
    double convert {val};
    
    if (units == "cm")
        convert *= cm_to_m;
    else if (units == "in")
        convert *= in_to_m;
    else if (units == "ft")
        convert *= ft_to_m;
    else if (units == "m")
        convert = val;
    else {
        cout << "Invalid input\n";
        exit (1);
    }
    return convert;
}
