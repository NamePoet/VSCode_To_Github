// autoscp.cpp -- illustrating scope of automatic variables
#include <iostream>
void oil(int x);
int main()
{
    using namespace std;

    int texas = 31;
    int year = 2011;
    cout << "In main(), texas = " << texas << ", &texas = ";
    cout << &texas << endl;
    cout << "In main(), year = " << year << ", &year = ";
    cout << &year << endl;
    oil(texas);
    cout << "In main(), texas = " << texas << ", &texas = ";
    cout << &texas << endl;
    cout << "In main(), year = " << year << ", &year = ";
    cout << &year << endl;
    return 0;
}

void oil(int x)
{
    using namespace std;
    int texas = 5;

    cout << "In oil(), texas = " << texas << ", &texas = ";
    cout << &texas << endl;
    cout << "In oil(), x = " << x << ", &x = ";
    cout << &x << endl;
    {
        // start a block
        int texas = 113;
        cout << "In block, texas = " << texas;
        cout << ", &texas = " << &texas << endl;
            cout << "In block, x = " << x << ", &x = ";
        cout << &x << endl;
    } // end a block
    cout << "Post-block texas = " << texas;
    cout << ", &texas = " << &texas << endl;
}

/*

        In main(), texas = 31, &texas = 0x6ffe0c
        In main(), year = 2011, &year = 0x6ffe08
        In oil(), texas = 5, &texas = 0x6ffdbc
        In oil(), x = 31, &x = 0x6ffde0
        In block, texas = 113, &texas = 0x6ffdb8
        In block, x = 31, &x = 0x6ffde0
        Post-block texas = 5, &texas = 0x6ffdbc
        In main(), texas = 31, &texas = 0x6ffe0c
        In main(), year = 2011, &year = 0x6ffe08

*/