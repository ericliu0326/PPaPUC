// Chapter 8 Exercise 9
//

/*
 Write a function that given two vector<double>s price and weight computes a value (an "index") that is the sum of all price[i]*weight[i].
 Make sure to have weight.size()==prize.size().
 */

#include "std_lib_facilities.h"


double index(const vector<double>& v1, const vector<double>& v2)
{
    double d {};
    for (int i = 0; i < v1.size(); ++i) {
        d += v1[i] * v2[i];
    }
    return d;
}

int main()
try
{
    vector<double> prices {1.3, 1.5, 2.1, 1.7};     // enter prices here
    vector<double> weights {.7, .9, 1.5, .5};      // enter weights here

    if(prices.size() != weights.size()) error("Number of prices does not equal number of weights. Please try again!\n");     // check vector sizes are equal
    std::cout << "Index of the prices and weights is: " << index(prices, weights) << endl;
    
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
    
// Notes:
// Program can be improved by taking inputs
