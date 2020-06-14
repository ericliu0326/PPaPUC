// Chapter 11 Exercise 1
//

 /*
    Write a program that reads a text file and converts it input
    to all lower case, producing a new file.
 */


#include "../std_lib_facilities.h"

int main()
try
{
    ifstream ifs {"sample_text.txt"};
    ofstream ofs {"sample_text2.txt"};
    char c;
    while (!ifs.eof()) {
            ofs << c;
    }
    
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
        
//        // Chapter 11 Exercise 1
//        //
//
//         /*
//            Write a program that reads a text file and converts it input
//            to all lower case, producing a new file.
//         */
//
//
//        #include "../std_lib_facilities.h"
//
//        int main()
//        try
//        {
//            ifstream ifs {"sample_text.txt"};
//            for (char c; cin.get(c);) {
//                ofstream ofs {"sample_text.txt"};
//
//                if (isalpha(c))
//                    ofs << tolower(c);
//                else if (!isalpha(c))
//                    ofs << c;
//            }
//
//            return 0;
//        }
//        catch(exception& e)
//        {
//            cerr << e.what() << '\n';
//            return 1;
//        }
//        catch(...)
//        {
//            cerr << "Unknown exception!" << '\n';
//            return 2;
//        }
//
