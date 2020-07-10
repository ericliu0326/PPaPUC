// ch_5_exercise_12.cpp
//SEE IF CODE CAN BE IMPROVED / CHANGED BEFORE UPLOADING TO GITHUB DUE TO CODE INSPIRATION


/*
Implement a little guessing game called (for some obscure reason) "Bulls and Cows". The program has a vector of four different integers in the range 0 to 9 (e.g., 1234 but not 1122) and it is the user's task to discover those numbers by repeated guesses. Say the number to be guessed is 1234 and the user guesses 1359; the response should be "1 bull and 1 cow" because the user got one digit (1) right and in the right position (a bull) and one digit (3) right but in the wrong position (a cow). The guessing continues until the user gets four bulls, that is, has the four digits correct and inthe correct order.
*/

#include "../std_lib_facilities.h"

// default solution is 7395
vector<int> solution {0, 3, 9, 5};

bool input_check(string s)
{
    // check for exactly 4 integers
    // converting from int to string and checking length
    if (s.length()!=4) {
        cerr << "Please try again and enter exactly four integers (i.e., 8391)\n";
        return false;
    }
    
    // check for 4 different integers
    for (int i = 0; i < s.length(); ++i)
        if (s[i] < '0' || s[i] > '9') {
            cerr << "Please try again and enter a four digit number.\n";
            return false;
        }
    
    // check for 4 different integers
    // already tested for valid integers inputs above, thus only testing for different integers
    vector<char> v;
    for (int i = 0; i < s.length(); ++i)
        v.push_back(s[i]);
    sort(v);
    
    for (int i = 0; i < v.size(); ++i)
        if (i!=0) {
            char j = v[i-1];
            if (j == v[i]) {
                cerr << "Please try again and enter four different integers (no repeat digits)\n";
                return false;
            }
        }
    return true;
}

// converting 4 character string into 4 single digits in vector
vector<int> conversion_storage(string s)
{
    vector<int> v;
    for (char c : s)
        v.push_back(c - '0');
    return v;
}

int bulls_check(vector<int> b)
{
    int bulls = 0;
    if (solution.size() == b.size()) {
        for (int i = 0; i < solution.size(); ++i)
            if (solution[i] == b[i]) bulls++;
        return bulls;
    }
    return bulls;
}

int cows_check(vector<int> b)
{
    // first checks to make sure element size is correct
    int cows = 0;
    if (solution.size() == b.size()) {
        for (int i = 0; i < solution.size(); ++i)
            for (int j = 0; j < b.size(); ++j)
                if (solution[i] == b[j] && i != j) cows++;
    }
    return cows;
}


int main()
try
{
    vector<int> guesses;
    string s;
    int bull = 0;
    int cow = 0;
    
    cout << "Welcome to Bulls and Cows guessing game! Try and guess four different integers in the range 0 to 9 (e.g., 1234 but not 1122). Order matters in this guessing game. If you guess a correct integer in the right position, it will be reflected in the bull count. If you guess a right number but in the wrong position, it will be reflected in the cow count. Please guess four different integers: \n";
    while(bull != 4) {
        if (cin >> s) {
            if (input_check(s)) {
                guesses = conversion_storage(s);
                bull = bulls_check(guesses);
                cow = cows_check(guesses);
                if (bull != 4) cout << "bull count: " << bulls_check(guesses) << " cow count: " << cows_check(guesses) << "\nPlease guess again!\n";  // will give new bull count
            }
        }
    }
    
    cout << "bulls: " << bull << ", cows: " << cow << " Congrats! You guessed the correct order!\n";
    keep_window_open("~");
}

catch (runtime_error e) {
    cerr << e.what() << '\n';
    return 1;
}
catch (...)
{
    cerr << "Unknown exception!\n";
    return 2;
}



