// file2.cpp -- contains functions called in file1.cpp
#include <iostream>
#include <cmath>
#include "coordin.h"  // structure templates, function prototypes

// convert rectangular to polar coordinates
polar rect_to_polar(rect xypos)
{
    using namespace std;
    polar answer;

    answer.distance = sqrt( xypos.x * xypos.x + xypos.y * xypos.y );
    answer.angle = atan2(xypos.y, xypos.x);
    return answer;  // returns a polar structure
}

// show polar coordinates, converting angle to degrees
void show_polar(polar dapos)
{
    using namespace std;
    const double Rad_to_deg = 57.29577951;

    cout << "distance = " << dapos.distance;
    cout << ", angle = " << dapos.angle * Rad_to_deg;
    cout << " degrees\n";
}


/*

    PS C:\Users\YYL\Desktop\VSCode_To_Github\C_Plus_Plus\02.07> g++ -std=c++11 file1.cpp file2.cpp 
    PS C:\Users\YYL\Desktop\VSCode_To_Github\C_Plus_Plus\02.07> ./a.exe
    Enter the x and y values: 120 80
    distance = 144.222, angle = 33.6901 degrees
    Next two numbers (q to quit): 120 50
    distance = 130, angle = 22.6199 degrees
    Next two numbers (q to quit): q
    Bye!

*/