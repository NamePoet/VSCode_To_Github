//ifelseif.cpp -- using if - else if - else
#include <iostream>
const int Fave = 27;      // n.特别喜爱的人
int main()
{
    using namespace std;
    int n;

    cout << "Enter a number in the range 1-100 to find ";
    cout << "my favorite number: ";
    do{
        cin >> n;
        if (n < Fave)
            cout << "Too low -- guess again: ";
        else if (n > Fave)
            cout << "Too high -- guess again: ";
        else 
            cout << Fave << " is right!\n";
    } while(n != Fave);

    return 0;
}
/*
    Enter a number in the range 1-100 to find my favorite number: 34
    Too high -- guess again: 23
    Too low -- guess again: 25
    Too low -- guess again: 27
    27 is right!
*/