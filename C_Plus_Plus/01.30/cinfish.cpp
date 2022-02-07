// cinfish.cpp -- non-numeric input terminates loop
#include <iostream>
const int Max = 5;
int main()
{
    using namespace std;
// get data
    double fish[Max];
    cout << "Please enter the weights of your fish.\n";
    cout << "You may enter up to " << Max   
         << " fish <q to terminate>.\n";
    cout << "fish #1: ";
    int i = 0;
    while (i < Max && cin >> fish[i]) {
        if (++i < Max)
            cout << "fish #" << i+1 << ": ";
    }
// calculate average
    double total = 0.0;
    for (int j = 0; j < i; j++)
        total += fish[j];
// report results
    if (i == 0) 
        cout << "No fish\n";
    else 
        cout << total / i << " = average weight of "
            << i << " fish\n";
    cout << "Done.\n";
    return 0;
}
/*
    Please enter the weights of your fish.
    You may enter up to 5 fish <q to terminate>.
    fish #1: 2.3
    fish #2: 4.5
    fish #3: 5.1
    fish #4: 6.8
    fish #5: 3.7
    4.48 = average weight of 5 fish
    Done.

*/