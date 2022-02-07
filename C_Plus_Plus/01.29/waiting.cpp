// waiting.cpp -- using clock() in a time-delay loop
#include <iostream>
#include <ctime>    // describes clock() function, clock_t type
int main()
{
    using namespace std;
    cout << "Enter the delay time, in seconds: ";
    float secs;
    cin >> secs;
    clock_t delay = secs * CLOCKS_PER_SEC;           // convert to clock ticks
                          // 该常量等于每秒钟包含的系统时间单位数
    cout << "starting\a\n";
    clock_t start = clock();
    while (clock() - start < delay )
        ; // note the semicolon
    cout << "done \a\n";

    return 0;
}