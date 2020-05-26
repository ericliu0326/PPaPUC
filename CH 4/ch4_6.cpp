//  ch 4.6 try this
//  C++


#include "std_lib_facilities.h"

// spits back out strings enterred, but "BLEEP"s out certain key words.
int main()
{
    vector<string> words;
    for (string phrases; cin>>phrases;)
        words.push_back(phrases);
    
    for (int i = 0; i < words.size(); ++i)
        if (words[i] == "hate" || words[i] == "Broccoli")
            cout << "BLEEP\n";
        else
            cout << words[i] << '\n';
}


