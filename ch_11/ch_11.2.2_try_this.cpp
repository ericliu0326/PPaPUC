// Chapter 11.2.2 Try This
//

 /*
  int a;
  int b;
  int c;
  int d;
  cin >> a >> hex >> b >> oct >> c >> d;
  cout << a << '\t' << b << '\t' << c << '\t' << d << '\t';
  
  Complete the code fragment above to make it into a program.
  Try this suggested input; then type in
    1234 1234 1234 1234
  Explain the results. Try other inputs to see what happens
 */


#include "../std_lib_facilities.h"

int main()
try
{
    int a;
    int b;
    int c;
    int d;
    // Entering 1234 four times will first read input as decimal
    // Then it will read 1234 as hex, and oct. On the fourth
    // input, it will read it as an oct due to stickiness (oct was last type specified)
    // Will output all numbers back in decimal form.
    cin >> a >> hex >> b >> oct >> c >> d;
    cout << a << '\t' << b << '\t' << c << '\t' << d << '\t';
    
}
catch(exception& e)
{
    cerr << e.what() << '\n';
    return 1;
}
catch(...)
{
    cerr << "Unknown exception!\n";
    return 2;
}
