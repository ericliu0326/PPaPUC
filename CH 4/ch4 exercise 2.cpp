//  Ch 4 Exercise 2
//  C++


#include "std_lib_facilities.h"


 int main()
 {
     vector<double> temps;
     for (double temp; cin >> temp; )
         temps.push_back(temp);

     double sum {0};
     for (int x : temps) sum += x;
     cout << "Average temperature: " << sum / temps.size() << '\n';

     
     double median {0};
     sort(temps);
     int i = temps.size() / 2;
     if (temps.size() % 2 == 1)
         median = temps[i];
     else
        median = (temps[i-1] + temps[i]) / 2;

     cout << "Median temperature: " << median << '\n';
 }

