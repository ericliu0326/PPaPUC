// Ch5exercise7.cpp
//
// Quadratic equations are of the form
//
//      a·x² + b·x + c = 0
//
// To solve these, one uses the quadratic formula:
//
//      x = (-b ± sqrt(b² - 4ac)) / 2a
//
// There is a problem, though: if b² - 4ac is less than zero, then it will
// fail. Write a program that calculate x for a quadratic equation. Create
// a function that prints out the roots of a quadratic equation, given a, b, c.
// When the program detects an equation with no real roots, have it print out
// a message. How do you know that your results are plausible? Can you check
// that they are correct?

#include "std_lib_facilities.h"

// a*x*x + b*x + c = 0

double a, b, c; // coefficients
const double delta = 1.0e-7;

double check(double x)
{
    double e = a*x*x+b*x+c;
    
    if (e==0) return x;
    if (0<e && delta<e) // larger than delta
        cout << "poor root; off by " << e << '\n';
    else if (e<-delta) // absolute value larger than delta (in case e was negative)
        cout << "poor root; off by " << e << '\n';
    return x;
}

void solve()
{
    cout << "Please enter three floating-point numbers (a b c) to be used as the coefficients in a*x*x + b*x + c == 0: ";

    while (cin>>a>>b>>c) {
        // if a == 0 then x == -c/b
        // if b == 0 then no real roots since c == 0 (no x solution)
        if(a==0) {
            if(b==0)
                cout << "No root\n";
            else
                cout << "x == " << -c/b << "\n";
        }
        else if(b==0) {
            if(sqrt(-c/a) == 0)
                cout << "one real root: x == 0\n";
            else if(sqrt(-c/a) < 0)
                cout << "no real roots\n";
            else
                cout << "two real roots: x == " << check(sqrt(-c/a)) << " and x == " << check(-sqrt(-c/a)) << "\n";
        }
        // conditions when a nor b are == 0 using quadratic formula
        // have to address when b^2-4ac is less than 0
        else {
            double FormulaCheck = b*b-4*a*c;
            if(FormulaCheck == 0)
                cout << "one real root: x == " << -b/(2*a) << "\n";
            else if(FormulaCheck < 0)
                cout << "no real roots\n";
            else
                cout << "two real roots: x == " << check((-b + sqrt(FormulaCheck))/(2*a)) << " and x == " << check((-b - sqrt(FormulaCheck))/(2*a)) << "\n";
        }
        cout << "please try again (enter a b c): ";
    }
}

// check solution by plugging back into a*x*x + b*x + c = 0
// floating point arithmetic not 100% accurate
// need delta threshold where answer is approximately accurate (small number delta)


int main()
try
{
    solve();
    keep_window_open("~");
}
catch (runtime_error e) {
    cout << e.what() << '\n';
    keep_window_open("~");
}
