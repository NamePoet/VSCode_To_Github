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
    cin.getline(dessert, ArSize);    // ����ǰArSize-1���ַ���dessert������
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

// instr1.cpp������
// I have some YiLin for you, Yang.