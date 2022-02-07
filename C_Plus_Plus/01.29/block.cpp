// block.cpp -- use a block statement
#include <iostream>
int main()
{
    using namespace std;
    cout << "The Amazing Accounto will sum and average ";
    cout << "five numbers for you.\n";
    cout << "Please enter five values:\n";
    double number;
    double sum = 0.0;
    for (int i = 1; i <= 5; i++) {                        //大括号代码块看成一个语句
        cout << "Value " << i << ": ";
        cin >> number;
        sum += number;
    }
    cout << "Five exquisite choices indeed! ";
    cout << "They sum to " << sum << endl;
    cout << "and average to " << sum / 5 << ".\n";
    cout << "The Amazing Accounto bids you adieu!\n";      // adieu : n.告别，辞行

    return 0;
}
/*
    The Amazing Accounto will sum and average five numbers for you.
    Please enter five values:
    Value 1: 2002
    Value 2: 2008
    Value 3: 2013
    Value 4: 2020
    Value 5: 2022
    Five exquisite choices indeed! They sum to 10065
    and average to 2013.
    The Amazing Accounto bids you adieu!

*/