// ifelse.cpp -- using the if else statement
// �޶��� std::
#include <iostream>
int main()
{
    char ch;

    std::cout << "Type, and I shall repeat.\n";
    std::cin.get(ch);
    while (ch != '.')
    {
        if (ch == '\n')
            std::cout << ch; // done if newline
        else 
            //std::cout << ++ch; // done otherwise
            std::cout << ch+1;    // ��ͬ�������㣬cout��ѽ�С�����������������������㡣char�ͱ������
        std::cin.get(ch); 
    }
// try ch + 1 instead of ++ch for interesting effect
    std::cout << "\nPlease excuse the slight confusion.\n";
        // std::cin.get();
        // std::cin.get();

    return 0;
}
/*
    Type, and I shall repeat.
    Love me like you do.
    Mpwf!nf!mjlf!zpv!ep
    Please excuse the slight confusion.

*/