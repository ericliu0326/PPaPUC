// Chapter 18.4.2 Try This
//

 /*
  Run this example and make sure you understand the result.
  If you do, you'll understand most of what there is to know
  about construction and destruction of objects.
 */


#include "../std_lib_facilities.h"

struct X {
    int val;
        void out(const string& s, int nv)
        {cerr << this << "->" << s << ": " << val << " (" << nv << ")\n";}
    X() { out("X()", 0); val = 0;}
    X(int v) { val = v; out("X(int)", v); }
    X(const X& x) { val = x.val; out("X(X&) ", x.val); }
    X& operator=(const X& a)
        { out("X::operator=()", a.val); return *this; }
    ~X() {out("~X()", 0); }
};

X glob(2);

X copy(X a) {return a;}

X copy2(X a) { X aa = a; return aa;}

X& ref_to(X& a) { return a; }

X* make(int i) { X a(i); return new X(a); }

struct XX {X a; X b;};

int main()
{
    X loc {4};  // local variable
    X loc2 {loc};   // copy construction
    loc = X{5};     // copy assignment
    loc2 = copy(loc);   // call by value and return
    loc2 = copy2(loc);
    X loc3 {6};
    X& r = ref_to(loc);     // call by reference and return
    delete make(7);
    delete make(8);
    vector<X> v(4);     // default values
    XX loc4;
    X* p = new X{9};    // an X on the free store
    delete p;
    X* pp = new X[5];   // an array of Xs on the free store;
    delete[] pp;
}
