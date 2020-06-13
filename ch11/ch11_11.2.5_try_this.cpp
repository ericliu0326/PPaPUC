// Chapter 11.2.5 Try This
//

 /*
  Make a simple table including the last name,
  first name, telephone number, and email address
  for yourself and at least five of your friends.
  Experiment with different field widths until you
  are satisifed that the table is well presented.
 */


#include "../std_lib_facilities.h"

int main()
try
{
    cout << setw(20) << "liuperic" << '|' << setw(15) << "(555)555-1234" << '|' << setw(22) << "fakeemail1@gmail.com" << '\n';
    cout << setw(20) << "John Doe" << '|' << setw(15) << "(555)555-2345" << '|' << setw(22) << "fakeemail2@gmail.com" << '\n';
    cout << setw(20) << "Jane Doe" << '|' << setw(15) << "(555)555-3456" << '|' << setw(22) << "fakeemail3@gmail.com" << '\n';
    cout << setw(20) << "John Smith" << '|' << setw(15) << "(555)555-4567" << '|' << setw(22) << "fakeemail4@gmail.com" << '\n';
    cout << setw(20) << "Johnny Smith" << '|' << setw(15) << "(555)555-5678" << '|' << setw(22) << "fakeemail5@gmail.com" << '\n';
    cout << setw(20) << "Johnathan Smith" << '|' << setw(15) << "(555)555-3456" << '|' << setw(22) << "fakeemail3@gmail.com" << '\n';
}
catch(exception& e)
{
    cerr << e.what() << '\n';
    return 1;
}
catch(...)
{
    cerr << "Unknown exception!\n";
    return 2;
}
