// Chapter 11 Drill 10
//

 /*
    Make a simple table including last name, first name, telephone number,
    and email address for yourself and at least five of your friends.
    Experiment withdifferent widths until you are satisfied that the table is
    well presented.
  
    Note: this is the same as the ch 11 - 11.2.5 try this exercise
    For this drill I interpreted the table requested in a different way.
    Now dividing table by person with their individual informations.
  
    Listed columns as directed in instructions, however could be improved
    by standardizing output and inputs to reduce redundancy of code.
 */


#include "../std_lib_facilities.h"

int main()
try
{
    cout << setw(6) << "name" << '\t' << "liuperic" << endl
        << setw(6) << "phone" << '\t' << "(555)555-1234" << endl
        << setw(6) << "email" << '\t' << "fakeemail1@gmail.com" << endl << endl;
    
    cout << setw(6) << "name" << '\t' << "Bob Smith" << endl
        << setw(6) << "phone" << '\t' << "(555)555-2234" << endl
        << setw(6) << "email" << '\t' << "fakeemail2@gmail.com" << endl << endl;

    cout << setw(6) << "name" << '\t' << "Jane Doe" << endl
        << setw(6) << "phone" << '\t' << "(555)555-3234" << endl
        << setw(6) << "email" << '\t' << "fakeemail3@gmail.com" << endl << endl;
    
    cout << setw(6) << "name" << '\t' << "John Doe" << endl
        << setw(6) << "phone" << '\t' << "(555)555-4234" << endl
        << setw(6) << "email" << '\t' << "fakeemail4@gmail.com" << endl << endl;
    
    cout << setw(6) << "name" << '\t' << "John Smith" << endl
        << setw(6) << "phone" << '\t' << "(555)555-5234" << endl
        << setw(6) << "email" << '\t' << "fakeemail5@gmail.com" << endl << endl;
    
    cout << setw(6) << "name" << '\t' << "Michael Dean" << endl
        << setw(6) << "phone" << '\t' << "(555)555-6234" << endl
        << setw(6) << "email" << '\t' << "fakeemail6@gmail.com" << endl << endl;

    return 0;
}
catch(exception& e)
{
    cerr << e.what() << '\n';
    return 1;
}
catch(...)
{
    cerr << "Unknown exception!" << '\n';
    return 2;
}
