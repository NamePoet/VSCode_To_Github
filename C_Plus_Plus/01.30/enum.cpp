// enum.cpp -- using enum
#include <iostream>
// create named constants for 0 - 6
enum {red, orange, yellow, green, blue, violet, indigo};   //indigo ����ɫ

int main()
{
    using namespace std;
    cout << "Enter color code (0-6): ";
    int code;
    cin >> code;
    while (code >= red && code <= indigo)     // �˴�enum���ͱ�����Ϊ��int����
    {
        switch(code)
        {
            case red    : cout << "Her lips were red.\n";      break;
            case orange : cout << "Her hair was orange.\n";    break;
            case yellow : cout << "Her shoes were yellow.\n";  break;
            case green  : cout << "Her nails were green.\n";   break;
            case blue   : cout << "Her sweatsuit was blue.\n"; break;
            case violet : cout << "Her eyes were violet.\n";   break;
            case indigo : cout << "Her mood was indigo.\n";    break;
        }
        cout << "Enter color mode (0-6): ";
        cin >> code;
    }
    cout << "Bye\n";

    return 0;
}
/*
    Enter color code (0-6): 1
    Her hair was orange.
    Enter color mode (0-6): 3
    Her nails were green.
    Enter color mode (0-6): 6
    Her mood was indigo.
    Enter color mode (0-6): 9
    Bye
*/

