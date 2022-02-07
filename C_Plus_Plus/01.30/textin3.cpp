//textin3.cpp -- reading chars to end of file
#include <iostream>
int main()
{
    using namespace std;
    char ch;
    int count = 0;
    cin.get(ch);
    while (cin.fail() == false)     // test for EOF   (未到文件尾)
    {
        cout << ch;
        ++count;
        cin.get(ch);
    }
    cout << endl << count << " characters read\n";

    return 0;
}
/*
    Ctrl + Z + Enter 模拟EOF
    Today my life begins.(回车键也被计算进去，算1个字符)
    Today my life begins.
    ^Z

    22 characters read
*/