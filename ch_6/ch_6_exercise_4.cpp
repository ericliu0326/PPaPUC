// ch_6_exercise_4.cpp

/*
 Define a class Name_value that holds a string and a value. Rework exercise 19 in Chapter 4 to use a vector<Name_value> instead of two vectors.
 
 Prompt from Ch 4 exercise 9:
 
 Write a program where you first enter a set of name-and-value pairs, such as Joe 17 and Barbara 22.
 For each pair, add the name to a vector called names and the number to a
 vector called scores (in corresponding positions, so that if names[7]=="Joe" then scores[7]==17).
 Terminate input with NoName 0.
 Check that each name is unique and terminate with an error message if a name is entered twice.
 Write out all the (name,score) pairs, one per line.
*/

#include "../std_lib_facilities.h"

class Name_value {
public:
    string name;
    int score;
    Name_value(string s, int i)
    : name(s), score(i) { }
};

int main()
try
{
    vector<Name_value> n;
    string s;
    int  v;
    
    cout << "Enter a set of name-and-value pair such as 'Joe 17': ";
    
    while(cin >> s >> v && s != "NoName") {
        for(int i = 0; i < n.size(); ++i)
            if(s==n[i].name) error("Please no duplicate names:" , s);
        n.push_back(Name_value(s,v));
    }
    for(int i = 0; i < n.size(); ++i)
        cout << n[i].name << " " << n[i].score << endl;
}
catch (exception& e) {
    cerr << e.what() << '\n';
    keep_window_open("~");
}
catch (...) {
    cerr << "Oops! Unknown exception\n";
    keep_window_open("~");
}
