// instr2.cpp -- reading more than one word with getline
#include <iostream>
int main()
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name:\n";
    cin.getline(name, ArSize);  // reads through newline
    cout << "Enter your favorite dessert:\n";
    cin.getline(dessert, ArSize);    // 读入前ArSize-1个字符到dessert数组中
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";

    return 0;
}
/*
    Enter your name:
    NamePoet
    Enter your favorite dessert:
    cake
    I have some delicious cake for you, NamePoet.
*/

// instr1.cpp的问题
// I have some YiLin for you, Yang.