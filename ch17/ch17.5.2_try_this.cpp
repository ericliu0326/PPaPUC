// Chapter 17.5.2 Try This
//

 /*
  Write a little program using base classes and memebrs
  where you define the constructors and destructors to output
  a line of information when they are called. Then, create
  a few objects to see how their constructors and destructors
  are called
 */


#include "../std_lib_facilities.h"

struct Student {
    string names;
    double scores;
    
    Student()
    {
        cout << "Student Default Constructor\n";    // prints when Student object created
    }
    
    ~Student()
    {
        cout << "Student Destructor\n";     // prints when Student object is deleted
    }
};

void create(string name, double score)
{
    Student Person;
    Person.names = name;
    Person.scores = score;
    cout << Person.names << " is created.\n";
}

int main()
{
    create("Bob", 100);     // Student Default Constructor, then deleted after function returns
    
    Student Dave;   // Student Default Constructor
    Dave.names = "Dave";
    Dave.scores = 50;
    cout << Dave.names << '\t' << Dave.scores << endl;
    // Student Destructor of David after
}
