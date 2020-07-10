// Chapter 9 Exercise 4
//

 /*
  Look at the headache-inducing last example of 8.4.
  Indent it properly and explain the meaning of each
  construct. Not that the example doesn't do anything
  meaniningful; it is pure obfuscation.
  
  struct X {
  void f(int x) {
  struct Y {
  int f() {return 1;} int m; }
  int m;
  m=x; Y m2;
  return f(m2.f());}
  int m; void g(int m) {
  if (m) f(m+2); else{
  g(m+2); }}
  X() {} void m3() {
  }
  
  void main() {
  X a; a.f(2);}
  };
  
  Comments:
  Class X with data members: int m
  and function members: f(), g(), X(), m3(), and main()
  
  f() has a class Y inside with data members int f and int m.
  g() has a logical condition on an integer (bad idea)
  X is the default constructor
  m3 member function does not do anything
  
  main declares Type X variable a and calls f() with 2.
  However, 2 is not utilized in the f() function in type X.
  
 */

#include "../std_lib_facilities.h"

struct X {
    void f(int x) {
        struct Y {
            int f() {return 1;}
            int m;
        };
        int m;
        m=x ;
        Y m2;
        return f(m2.f());
    }
    int m;
    
    void g(int m) {
        if (m) f(m+2);
        else{
            g(m+2);
        }
    }
    
    X() {}
    void m3() {}
    
    void main() {
        X a;
        a.f(2);
    }
};
