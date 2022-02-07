// textin2.cpp -- using cin.get(char) 可以拾取空格、制表符等字符
//Alt + 左键 ————— 选中多行内容
#include <iostream>
int main()
{
    using namespace std;
    char ch;
    int count = 0;        // use basic input

    cout << "Enter characters; enter # to quit:\n";
    cin.get(ch);          // get a character
    while (ch != '#')     // test the character
    {
        cout << ch;       // echo the character
        ++count;          // count the character
        cin.get(ch);     // get the character
    }
    cout << endl << count << " charcters read\n";

    return 0;
}
/*
    Enter characters; enter # to quit:
    Would you be my lover?#Yes, I would.
    Would you be my lover?
    22 charcters read
*/