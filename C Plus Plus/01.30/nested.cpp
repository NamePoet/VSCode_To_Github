// nested.cpp -- nested loops and 2-D array
#include <iostream>
const int Cities = 5;
const int Years = 4;
int main()
{
    using namespace std;
    const char * cities[Cities] = // array of pointers
    {                                // to 5 strings
        "Gribble City",
        "Gribbletown",
        "New Gribble",
        "San Gribble",
        "Gribble Vista"
    };
    /*
    可以使用char数组的数组，来替代字符串指针数组
    char cities[Cities][25] = // array of 5 arrays of 25 char
    {
        "Gribble City",
        "Gribbletown",
        "New Gribble",
        "San Gribble",
        "Gribble Vista"
    };
    */

    int maxtemps[Years][Cities] = // 2-D array
    {
        {96, 100, 87, 101, 105},        // values for maxtemps[0]
        {96, 98, 91, 107, 104},         // values for maxtemps[1]
        {97, 101, 93, 108, 107},        // values for maxtemps[2]
        {98, 103, 95, 109, 108}         // values for maxtemps[3]
    };

    cout << "Maximum temperatures for 2008 - 2011\n\n";
    for (int city = 0; city < Cities; ++city)
    {
        cout << cities[city] << ":\t";
        for (int year = 0; year < Years; ++year)
            cout << maxtemps[year][city] << "\t";
        cout << endl;
    }
    // cin.get()
    return 0;

}
/*
    Maximum temperatures for 2008 - 2011

    Gribble City:   96      96      97      98
    Gribbletown:    100     98      101     103
    New Gribble:    87      91      93      95
    San Gribble:    101     107     108     109
    Gribble Vista:  105     104     107     108
*/