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
    cout << "Counting down ... " << n << endl;
    if (n > 0)
        countdown(n-1);     // function calls itself
    cout << n << ": Kaboom!\n";
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