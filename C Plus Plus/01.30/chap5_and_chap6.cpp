// and.cpp -- using the logical AND operator
#include <iostream>
const int ArSize = 6;
int main()
{
    using namespace std;
    float naaq[ArSize];
    cout << "Enter the NAAQs (New Age Awareness Quotients) "
         << "of\nyour neighbours. Program terminates "
         << "when you make\n" << ArSize << " entries "
         << "or enter a negative value.\n";
   
    int i = 0;
    float temp;
    cout << "First value: ";
    cin >> temp;
    while (i < ArSize && temp >= 0) 
    {
        naaq[i] = temp;
        ++i;
        if (i < ArSize)
        {
            cout << "Next value: ";
            cin >> temp;
        }
    }
    if (i == 0)
        cout << "No data--bye\n";
    else 
    {
        cout << "Enter your NAAQ: ";
        float you;
        cin >> you;
        int count = 0;
        for (int j = 0; j < i; j++) 
            if (naaq[j] > you)
                ++count;
        cout << count;
        cout << " of your neighbors have greater awareness of\n"
             << "the New Age than you do.\n";
    }

    return 0;
}
/*

    Enter the NAAQs (New Age Awareness Quotients) of
    your neighbours. Program terminates when you make
    6 entries or enter a negative value.
    First value: 1.45
    Next value: 3.24
    Next value: 5.47
    Next value: 2.76
    Next value: 9.12
    Next value: 2.56
    Enter your NAAQ: 4.55
    2 of your neighbors have greater awareness of
    the New Age than you do.

*/