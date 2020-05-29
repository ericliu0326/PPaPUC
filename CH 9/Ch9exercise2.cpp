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


class Name_pairs {
public:
    void read_names();   // take name inputs and store in vector
    void read_ages();     // assigns each name an age
    // Name_pairs();   // default constructor
    Name_pairs();
    void sort();
    void print() const;
private:
    vector<string> name{};
    vector<double> age{};
    const string end{"end"};
    
};

//bool is_age(Name_pairs::read_ages() ages)
//{
 //   if(
//}

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

void Name_pairs::sort()
{
    if(name.size() != age.size()) error("Number of names not equal to number of ages.\n");
    vector<string> copy_name = name;
    vector<double> copy_age;
    
    for(int i = 0; i<copy_name.size(); ++i) {
        
    }
    
    
}

void Name_pairs::print() const
{
    Name_pairs pair;
    if(name.size() != age.size()) error("Number of names not equal to number of ages.\n");
    for (int i = 0; i<name.size(); ++i)
        cout << name[i] << " " << age[i] << endl;
}

int main()
try
{
    Name_pairs pair{};
    pair.read_names();
    pair.read_ages();
    pair.print();
    pair.sort();
    pair.print();   // reprint after sorting to check
    
    
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
    
// note:
// dates are not completely accurate due to 31 day each month assumption
