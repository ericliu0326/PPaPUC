// Ch5drill.cpp
//
// Below are 25 code fragments. Each is meant to be inserted into this
// "scaffolding"

// Each has zero or more errors. Your task is to find and remove all errors in
// each program. When you have removed those bugs, the resulting program will
// compile, run, and write "Success!" Even if you think you have spotted an
// error, you still need to enter the (original, unimproved) program fragment
// and test it; you may have guessed wrong about what the error is, or there
// may be more errors in a fragment tha you spotted. Also, one purpose of this
// drill is to give you a feel for how your compiler reacts to different kind
// of errors. Do not enter the scaffolding 25 times. Do not fix problems by simply deleting a segment; repair
// them by changing, adding, or deleting a few characters.


#include "std_lib_facilities.h"

int main()

// added drill number in front of "Success" output to keep track of number of successes (should be 25 total)
try {
    // drill 1
    // Cout << "Success!\n";
    // fixed spelling of cout
    cout << "1: Success!\n";
    
    // drill 2
    // cout << "Success!\n;
    // added closing "
    cout << "2: Success!\n";
    
    // drill 3
    // cout <<"Success" << !\n";
    // added "
    cout << "3: Success" << "!\n";
    
    // drill 4
    // cout << success << '\n';
    // 'success' not declared, reverted to "Success!"
    cout << "4: Success!" << '\n';
    
    // drill 5
    // string res = 7;
    // vector<int> v(10);
    // v[5] = res;
    // cout << "Success!\n";
    // change res type to int
    int res = 7;
    vector<int> v5(10);
    v5[5] = res;
    cout << "5: Success!\n";
    
    // drill 6
    // vector<int> v6(10);
    // v6(5) = 7;
    // if (v(5)!=7) cout << "6: Success!\n";
    // used [] instead of () for vector indexing
    // fixed logical error by removing ! in if formula and added '=''
    vector<int> v6(10);
    v6[5] = 7;
    if (v6[5] == 7) cout << "6: Success!\n";
    
    // drill 7
    // if (cond) cout << "Success!\n";
    // else cout << "Fail!\n";
    // changed cond into true bool expression
    bool d7 = true;
    if (d7 == true) cout << "7: Success!\n";
    else cout << "7: Fail!\n";
    
    // drill 8
    // bool c = false;
    // if (c) cout << "Success!\n";
    // else cout << "Fail!\n";
    // added argument in if statement
    bool d8 = false;
    if (d8 == false) cout << "8: Success!\n";
    else cout << "Fail!\n";
    
    // drill 9
    // string s9 = "ape";
    // boo d9 = "fool" <s;
    // if (d9) cout << "Success!\n";
    // fixed spelling of bool and fixed logical argument
    string s9 = "ape";
    bool d9 = "fool" < s9;
    if (!d9) cout << "9: Success!\n";

    // drill 10
    // string s = "ape";
    // if (s=="fool") cout << "Success!\n";
    // fixed logic argument
    string s10 = "ape";
    if (s10!="fool") cout << "10: Success!\n";
    
    // drill 11
    // string s = "ape";
    // if (s=="fool") cout < "Success!\n";
    // fixed '<<' operator
    string s11 = "ape";
    if (s11!="fool") cout << "11: Success!\n";
    
    // drill 12
    // string s = "ape";
    // if (s+"fool") cout < "Success!\n";
    // not sure what the example is trying to test
    //fixed cout operator and changed if statement
    string s12 = "ape";
    if (s12!="fool") cout << "12: Success!\n";
    
    //drill 13
    // vector<char> v(5);
    // for (int i=0; 0<v.size(); ++i) ;
    // cout << "Success!\n";
    // for loop is always true
    // will produce success output once
    vector<char> v13(5);
    for (int i13=0; i13<v13.size(); ++i13);
    cout << "13: Success!\n";
    
    // drill 14
    // vector<char> v(5);
    // for (int i=0; i<=v.size(); ++i);
    // cout << "Success!\n";
    // range error in for loop
    // will produce success output once
    vector<char> v14(5);
    for (int i14 = 0; i14<v14.size(); ++i14);
    cout << "14: Success!\n";
    
    // drill 15
    // string s = "Success!\n";
    // for (int i=0; i<6; ++i) cout << s[i];
    // fixed range
    string s15 = "15: Success!\n";
    for (size_t i=0; i<s15.size(); ++i)
    cout << s15[i];
    
    // drill 16
    // if (true) then cout << "Success!\n";
    // else cout << "Fail!\n";
    // 'then' not defined
    // else statement will never be executed
    if (true) cout << "16: Success!\n";
    else cout << "Fail!\n";
    
    // drill 17
    // int x = 2000;
    // char c = x;
    // if (c==2000) cout << "Success!\n";
    // narrow conversion of int into c
    int x17 = {2000};
    int c17 = x17;
    if (c17==2000) cout << "17: Success!\n";
    
    // drill 18
    // string s = "Success!\n";
    // for (int i=0; i<10; ++i) cout << s[i];
    // works but changing condition to length of string is better
    string s18 = "18: Success!\n";
    for (int i18=0; i18<s18.size(); ++i18) cout << s18[i18];
    
    // drill 19
    // vector v(5);
    // for (int i=0; i<=v.size(); ++i);
    // cout << "Success!\n";
    // range error in for loop condition
    // for loop does not actually trigger the cout output
    vector<int> v19(5);
    for (int i19=0; i19<v19.size(); ++i19);
    cout << "19: Success!\n";
    
    // drill 20
    // int i=0;
    // int j=9;
    // while (i<10) ++j;
    // if (j<1) cout << "Success!\n";
    // code will run forever since while loop never exits
    // fix so i is incrementing
    int i20=0;
    int j20=9;
    while (i20<10) ++i20;
    if (j20<i20) cout << "20: Success!\n";
    
    // drill 21
    // int x = 2;
    // double d = 5/(x-2);
    // if (d==2*x+0.5)
    // cout << "Success!\n";
    // double has division by - error
    // double has possibility for truncating error
    int x21 = 2;
    double d21 = 5.0/x21+2;
    if (d21==2*x21+0.5)
    cout << "21: Success!\n";
    
    // drill 22
    // string<char> s = "Success!\n";
    // for (int i=0; i<=10; ++i) cout << s[i];
    // range error and string<char> is not valid
    string s22 = "22: Success!\n";
    for (int i22=0; i22<s22.size(); ++i22) cout << s22[i22];
    
    // drill 23
    // int i=0;
    // while (i<10) ++j;
    // if (j<i) cout << "Success!\n";
    // j is never defined
    // while loop will never terminate
    int i23=0;
    int j23=0;
    while (i23<10) ++i23;
    if (j23<i23) cout << "23: Success!\n";
    
    // drill 24
    // int x = 4;
    // double d = 5/(x-2);
    // if (d=2*x+0.5) cout << "Success!\n";
    // if statement will always be true because using assignment
    // double d can be truncated
    // fixed if statement condition
    int x24 = 4;
    double d24 = 5.0/(x24-2);
    if (d24==x24/2+0.5) cout << "24: Success!\n";
    
    // drill 25
    // cin << "Success!\n";
    // no match for operator <<
    cout << "25: Success!\n";
    
    keep_window_open();
    return 0;
}
catch (exception& e) {
    cerr << "error: " << e.what() << '\n';
    keep_window_open();
    return 1;
}
catch (...) {
    cerr << "Oops: unknown excepton!\n";
    keep_window_open();
    return 2;
}
