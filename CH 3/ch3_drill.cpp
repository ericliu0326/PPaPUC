//
//  ch3_drill.cpp
//  C++

#include "std_lib_facilities.h"

// read and compare names
int main()
{
    string first_name;
    string friend_name;
    cout << "Enter the name of the person you want to write to ";
    cin >> first_name;
    cout << "Dear " << first_name << ",\n"
    << "    How are you? I am fine. I miss you. Hope you are well and healthy in these uncertain times.\n";
    cout << "Enter the name of another friend\n";
    cin >> friend_name;
    cout << "Have you seen " << friend_name << " lately?\n";
    char friend_sex = 0;
    cout << "Enter 'm' if friend is male and 'f' if friend is female\n";
    cin >> friend_sex;
    while (friend_sex != 'm' && friend_sex != 'f') {
        cout << "Invalid answer. Please type 'f' for female or 'm' for male\n";
        cin >> friend_sex;}
    if (friend_sex == 'm')
        cout << " If you see " << friend_name << " please ask him to call me.";
    if (friend_sex == 'f')
        cout << " If you see " << friend_name << " please ask her to call me.";
    cout << "Please enter your age\n";
    int age;
    cin >> age;
    cout << "I hear you just had a birthday and you are " << age << " years old.";
    if (age <= 0 || age >= 110)
        simple_error("you're kidding!");
    if (age < 12)
        cout << "Next year you will be " << age+1 << ".\n";
    if (age == 17)
        cout << "Next year you will be able to vote.\n";
    if (age > 70)
        cout << "I hope you are enjoying retirement.\n";
    cout << "\nYours sincerely,\n\n" << first_name << '\n';
}
