// more_and.cpp -- using the logical AND operator
#include <iostream>
const char * qualify[4] = // an array of pointers
{ // to strings
    "10,000-meter race.\n",
    "mud tug-of-war.\n",
    "masters canoe jousting.\n",
    "pie-throwing festival.\n"
};
int main()
{
    using namespace std;
    int age;
    cout << "Enter your age in years: ";
    cin >> age;
    int index;

    if (age > 17 && age < 35)
        index = 0;
    else if (age >= 35 && age < 50)
        index = 1;
    else if (age >= 50 && age < 65)
        index = 2;
    else 
        index = 3;

    cout << "You qualify for the " << qualify[index];
    return 0;
}
/*
    Enter your age in years: 19
    You qualify for the 10,000-meter race.

    Enter your age in years: 45
    You qualify for the mud tug-of-war.

*/