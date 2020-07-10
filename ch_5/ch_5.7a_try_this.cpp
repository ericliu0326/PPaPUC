// ch_5.7a_try_this.cpp
//

#include "../std_lib_facilities.h"

// Book data example 1
vector<double> temps_bookexample1 {
    -16.5, -23.2, -24.0, -25.7, -26.1, -18.6, -9.7, -2.4,
    7.5, 12.6, 23.8, 25.3, 28.0, 34.8, 36.7, 41.5,
    40.3, 42.6, 39.7, 35.4, 12.6, 6.5, -3.7, -14.3
    };

// Book example 2 with no temp below 0, causing error in low temp
vector<double> temps_bookexample2 {
    76.5, 73.5, 71.0, 73.6, 70.1, 73.5, 77.6, 85.3, 88.5, 91.7, 95.9, 99.2, 98.2, 100.6, 106.3, 112.4, 110.2, 103.6, 94.9, 91.7, 88.4, 85.2, 85.4, 87.7
    };

// 0 input is the least amount to get it to fail
// Average temperature produces a "nan" result
vector<double> temps_min;

int main()
{
    vector<double> temps;
    
    // Program currently testing set of inputs from the first book example
    for (double x : temps_bookexample1)
        temps.push_back(x);

    double sum = 0;
    double high_temp = 0;
    double low_temp = 0;

    for (double x : temps) {
        if (x > high_temp) high_temp = x;
        if (x < low_temp) low_temp = x;
        sum += x;
    }

    cout << "High temperature: " << high_temp << '\n';
    cout << "Low temperature: " << low_temp << '\n';
    cout << "Average temperature: " << sum/temps.size() << '\n';
}
