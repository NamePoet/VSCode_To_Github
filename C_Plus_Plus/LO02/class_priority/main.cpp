#include <iostream>
#include "priority.h"
using namespace std;
int main() {
    cout << Priority::getMax();
    Priority p1(50);
    Priority p2(Priority::getMin());
}
    
