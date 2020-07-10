//
// ch_3.9_try_this.cpp
// C++



#include "../std_lib_facilities.h"

// read and compare names
int main()
{
    double d = 0;
    while (cin>>d){
        int i = d;
        char c = i;
        int i2 = c;
        cout << "d==" << d
                << "i==" << i
                << "i2==" << i2
                << "char(" << c << ")\n";
    }
}

