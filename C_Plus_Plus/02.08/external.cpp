// external.cpp -- external variables
// compile with support.cpp
#include <iostream>
using namespace std;
// external variable
double warming = 0.3;  // warming defined
// function prototype
void update(double dt);
void local();

int main()              // uses global variable
{
    cout << "Global warming is " << warming << " degrees.\n";
    update(0.1);       // call function to change warming
    cout << "Global warming is " << warming << " degrees.\n";
    local();
    cout << "Global warming is " << warming << " degrees.\n";
    return 0;
}


/*

    Global warming is 0.3 degrees.
    Updating global warming to 0.4 degrees.
    Global warming is 0.4 degrees.
    Local warming = 0.8 degrees.
    But global warming = 0.4 degrees.
    Global warming is 0.4 degrees.

*/
