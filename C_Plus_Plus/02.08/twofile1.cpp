// twofile1.cpp -- variables with external and internal linkage
#include <iostream>     // to be compiled with twofile2.cpp
int tom = 3;            // external variable definition
int dick = 30;          // external variable definition
static int harry = 300; // static, internal linkage

// function prototype
void remote_access();

int main()
{
    using namespace std;
    cout << "main() reports the following addresses:\n";
    cout << &tom << " = &tom, " << &dick << " = &dick, ";
    cout << &harry << " = &harry\n";
    remote_access();
    return 0;
}


/*

    main() reports the following addresses:
    0x472010 = &tom, 0x472014 = &dick, 0x472018 = &harry
    remote_access() reports the following addresses:
    0x472010 = &tom, 0x472020 = &dick, 0x472024 = &harry

*/
