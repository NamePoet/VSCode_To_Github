// recur.cpp -- using recursion
#include <iostream>
void countdown(int n);

int main()
{
    countdown(4);          // call the recursive function
    return 0;
}

void countdown(int n)
{
    using namespace std;
    cout << "Counting down ... " << n << " (n at " << &n << ")" << endl;
    if (n > 0)
        countdown(n-1);     // function calls itself
    cout << n << ": Kaboom!" << " (n at " << &n << ")" << endl;
}
/*

    Counting down ... 4
    Counting down ... 3
    Counting down ... 2
    Counting down ... 1
    Counting down ... 0
    0: Kaboom!
    1: Kaboom!
    2: Kaboom!
    3: Kaboom!
    4: Kaboom!

*/

/*

    Counting down ... 4 (n at 0x6ffe00)
    Counting down ... 3 (n at 0x6ffdc0)
    Counting down ... 2 (n at 0x6ffd80)
    Counting down ... 1 (n at 0x6ffd40)
    Counting down ... 0 (n at 0x6ffd00)
    0: Kaboom! (n at 0x6ffd00)
    1: Kaboom! (n at 0x6ffd40)
    2: Kaboom! (n at 0x6ffd80)
    3: Kaboom! (n at 0x6ffdc0)
    4: Kaboom! (n at 0x6ffe00)


*/