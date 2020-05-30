// Chapter 9 Exercise 2
//

 /*
  Design and implement a Name_pairs class holding (name, age) pairs where name is a string
  and age is a double. Represent that as a vector<string> (called name) and a vector<double>
  (called age) member. Provide an input operation read_names() that reads a series of names.
  Provide a read_ages() operation that prompts the user for an age for each name.
  Provide a print() operation that prints out (name[i], age[i]) pairs (one per line)
  in the order determined by the name vector. Provide a sort() operation that sorts
  the name vector in alphabetical order and reorganizes the age vector to match.
  Implement all "operations" as member functions. Test the class (of course:
  test early and often)
 */

#include "std_lib_facilities.h"
#include <algorithm>
#include <utility>


class Name_pairs {
public:
    void read_names();   // take name inputs and store in vector
    void read_ages();     // assigns each name an age
    // Name_pairs();   // default constructor
    Name_pairs();
    void groupsort();   // groups and sorts vector into pairs
    void print() const;
private:
    vector<string> name{};
    vector<double> age{};
    const string end{"end"};
    vector< pair<string, double> > pairing;
};

void Name_pairs::read_names()
{
    string names;
    std::cout << "Please enter names separated by new lines. Once done with names, please type end\n";
    while(cin>>names && names != end) {
        name.push_back(names);
    }
}

void Name_pairs::read_ages()
{
    double ages;
    std::cout << "Please assign an age to each name.\n";
    for (int i = 0; i < name.size(); ++i) {
        std::cout << name[i] << ": ";
        if(!(cin >> ages)) error("Invalid age");
        age.push_back(ages);
    }
}

Name_pairs::Name_pairs()
{}

void Name_pairs::groupsort()
{
    if(name.size() != age.size()) error("Number of names not equal to number of ages.\n");
    for (int i = 0; i < name.size(); ++i)
        pairing.push_back( make_pair(name[i], age[i]) );
    sort(pairing.begin(), pairing.end());
    for(int i = 0; i < pairing.size(); ++i) {     // check pairing size
        name[i] = pairing[i].first;
        age[i] = pairing[i].second;
    }
}

void Name_pairs::print() const
{
    if(name.size() != age.size()) error("Number of names not equal to number of ages.\n");
    for (int i = 0; i<name.size(); ++i)
        cout << name[i] << " " << age[i] << endl;
}

int main()
try
{
    Name_pairs pairs{};
    pairs.read_names();
    pairs.read_ages();
    std::cout << '\n' << "Pre-sorted pairs: \n";
    pairs.print();
    pairs.groupsort();
    std:: cout << '\n' << "Post-sorted pairs: \n";
    pairs.print();
    
    return 0;
}
catch(exception& e)
{
    cerr << e.what() << '\n';
    return 1;
}
catch(...)
{
    cerr << "Unknown exception!!\n";
    return 2;
}


