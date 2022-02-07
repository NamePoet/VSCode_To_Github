// jump.cpp -- using continue and break
#include <iostream>
const int ArSize = 80;
int main()
{
    using namespace std;
    char line[ArSize];
    int spaces = 0;

    cout << "Enter a line of text:\n";
    cin.get(line, ArSize);  // 读入指定长度的字符串
    cout << "Complete line:\n" << line << endl;   // 输出一整个字符串
    cout << "Line through first period:\n";
    for (int i = 0; line[i] != '\0'; i++) {
        cout << line[i]; // display character
        if (line[i] == '.') // quit if it's period
            break;
        if (line[i] != ' ') // skip rest of loop
            continue;
        spaces++;
    }
    cout << "\n" << spaces << " spaces\n";
    cout << "Done.\n";
    return 0;
}