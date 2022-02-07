// if.cpp -- using the if statement
// 计算输入中的空格数和字符总数, 使用句点(.)来确定句子的结尾
#include <iostream>
int main()
{
    using std::cin;     // using declarations
    using std::cout;
    char ch;
    int spaces = 0;
    int total = 0;
    cin.get(ch);
    while (ch != '.')   // quit at end of sentence
    {
        if (ch == ' ')  // check if ch is a space
            ++spaces;
        ++total;        // done every time
        cin.get(ch);
    }
    cout << spaces << " spaces, " << total;
    cout << " characters total in sentence\n";

    return 0;
}
/*
    when you love someone.
    3 spaces, 21 characters total in sentence
*/