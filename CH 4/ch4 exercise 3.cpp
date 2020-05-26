//  Ch 4 Exercise 3
//  C++

#include "std_lib_facilities.h"

// Reads sequence of double values (distance between cities) and prints sum, min, median, and avg.

 int main()
 {
     vector<double> distance;
     double sum = {0};
     double mean = {0};
     
     cout << "Please enter a sequence of doubles representing distances between cities : ";
     for (double distances; cin >> distances; )
         distance.push_back(distances);
     
     for (int i : distance) sum += i;
     mean = sum / distance.size();
     if (distance.size() == 0) cout << "ERROR! No distances";
     
     sort(distance);
     cout << "Sum: " << sum << "\nMin: " << distance[0] << "\nMax: " << distance[distance.size()-1] << "\nAverage: " << mean << "\n";
 }

