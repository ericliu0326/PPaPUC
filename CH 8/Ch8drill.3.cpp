// Ch8drill
// Ch8drill.3.cpp
//

 /*
  Write a program using a single file containing three name spaces X, Y, and Z so that the following main() works
  int main()
  {
      X::var = 7;
      X::print();    // print X's var
      using namespace Y;
      var = 9;
      print();    // print Y's var
      {
          using Z::var;
          using Z::print;
          var = 11;
          print();    // print Z's var
      }
      print();    // print Y's var
      X::print();     // print X'svar
      std::cout << endl << X::var << ", " << Y::var << ", " << Z::var;
  }

  Each namespace needs to define a variable called var and a function called print() that outputs the appropriate var using cout.
 */



#include "std_lib_facilities.h"

namespace X {
    int var {};
    void print()
    {
        std::cout << "var from namespace X is " << var << endl;
    }
}

namespace Y {
    int var {};
    void print()
    {
        std::cout << "var from namespace Y is " << var << endl;
    }
}

namespace Z {
    int var {};
    void print()
    {
        std::cout << "var from namespace Z is " << var << endl;
    }
}

int main()
{
    X::var = 7;
    X::print();    // print X's var
    using namespace Y;
    var = 9;
    print();    // print Y's var
    {
        using Z::var;
        using Z::print;
        var = 11;
        print();    // print Z's var
    }
    print();    // print Y's var
    X::print();     // print X'svar
}
