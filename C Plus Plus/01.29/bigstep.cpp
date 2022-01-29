// bigstep.cpp -- count as directed
#include <iostream>
int main()
{
    using std::cout;  // a using declaration
    using std::cin;
    using std::endl;
    cout << "Enter an integer: ";
    int by;
    cin >> by;
    cout << "Counting by " << by << "s:\n";
    for (int i = 0; i < 100; i = i + by) 
        cout << i << endl;

    return 0;
}
/*

    Enter an integer: 12
    Counting by 12s:
    0
    12
    24
    36
    48
    60
    72
    84
    96

*/