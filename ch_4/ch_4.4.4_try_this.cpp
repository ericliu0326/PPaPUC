//  ch 4.4 try this pt 4
//  C++


ch_4.4.4_try_this.cpp

// for loop for previous 4.4 p3 example with table of integer values for uppercase letters and digits included

int main()
{
    for (char c = 'a'; c <= 'z'; ++c)
        cout << c << '\t' << int(c) << '\n';
    for (char u = 'A'; u <= 'Z'; ++u)
        cout << u << '\t' << int(u) << '\n';
    for (int i = 0; i <= 9; ++i)
        cout << i << '\n';
}
