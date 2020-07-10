// Chapter 4 Exercise 19

/*
 Write a program where you first enter a set of name-and-value pairs,
 such as Joe 17 and Barbara 22. For each pair, add the name to a vector called
 names and the number to a vector called scores (in corresponding positions,
 so that if names[7]=="Joe" then scores[7]==17). Terminate input with NoName 0.
 Check that each name is unique and terminate with an error message if a name
 is entered twice. Write out all the (name,score) pairs, one per line.
*/

#include "../std_lib_facilities.h"

int main()
try
{
    vector<string> names;
    vector<int> scores;
    
    cout << "Enter a set of name-and-value pair such as 'Joe 17': ";
    string name;
    int score;
    while(cin >> name >> score && name!="NoName") {
        for (int i = 0; i < names.size(); ++i)
            if (name==names[i]) error("duplicate: ", name);
            names.push_back(name);
        scores.push_back(score);
    }
    
    for (int i = 0; i < name.size(); ++i)
        cout << names[i] << " " << scores[i] << '\n';

      keep_window_open("~");    // For some Windows(tm) setups
}
    catch (runtime_error e) {    // this code is to produce error messages; it will be described in Chapter 5
        cout << e.what() << '\n';
        keep_window_open("~");    // For some Windows(tm) setups
}
    catch (...) {    // this code is to produce error messages; it will be described in Chapter 5
        cout << "exiting\n";
        keep_window_open("~");    // For some Windows(tm) setups
}
