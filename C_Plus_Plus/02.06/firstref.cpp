// firstref.cpp -- defining and using a reference
#include <iostream>
int main()
{
    using namespace std;
    int rats = 101;
    int & rodents = rats;  // rodents is a reference       rodent n.啮齿类动物
    cout << "rats = " << rats;
    cout << ", rodents = " << rodents << endl;
    rodents++;
    cout << "rats = " << rats;
    cout << ", rodents = " << rodents << endl;

// some implementations require type casting the following        implementation n.实施，执行
// addresses to type unsigned
    cout << "rats address = " << &rats;
    cout << ", rodents address = " << &rodents << endl;
    return 0;
}


/*
    rats = 101, rodents = 101
    rats = 102, rodents = 102
    rats address = 0x6ffe04, rodents address = 0x6ffe04
*/