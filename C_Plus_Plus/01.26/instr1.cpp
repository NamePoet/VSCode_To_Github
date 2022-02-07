// Ctrl + Alt + L 光标选中多行相同的内容 

// instr1.cpp
#include <iostream>
int main()
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name:\n";
    cin.get(name, ArSize).get();    //cin >> name;
    cout << "Enter your favorite dessert:\n";
    cin.get(dessert, ArSize).get();    //cin >> dessert;
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";

    return 0;
}
/*
Enter your name:
YYL
Enter your favorite dessert:
BlackForestCake
I have some delicious BlackForestCake for you, YYL.
*/


/*
cin.get() 方法

Enter your name:
Yang YiLin
Enter your favorite dessert:
Apple Cake
I have some delicious Apple Cake for you, Yang YiLin.


*/