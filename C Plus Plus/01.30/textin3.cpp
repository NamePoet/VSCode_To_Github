//textin3.cpp -- reading chars to end of file
#include <iostream>
int main()
{
    using namespace std;
    char ch;
    int count = 0;
    cin.get(ch);
    while (cin.fail() == false)     // test for EOF   (δ���ļ�β)
    {
        cout << ch;
        ++count;
        cin.get(ch);
    }
    cout << endl << count << " characters read\n";

    return 0;
}
/*
    Ctrl + Z + Enter ģ��EOF
    Today my life begins.(�س���Ҳ�������ȥ����1���ַ�)
    Today my life begins.
    ^Z

    22 characters read
*/