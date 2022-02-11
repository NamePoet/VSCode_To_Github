// stacker.cpp -- testing the Stack class
#include <iostream>
#include <cctype>  // or ctype.h
#include "stack.h"
int main()
{
    using namespace std;
    Stack st;  // create an empty stack
    char ch;
    unsigned long po;
    cout << "Please enter A to add a purchase order,\n"
        << "P to process a PO, or Q to quit.\n";
    while (cin >> ch && toupper(ch) != 'Q')
    {
        while (cin.get() != '\n')
            continue;
        if (!isalpha(ch))
        {
            cout << '\a';
            continue;
        }
        switch(ch)
        {
            case 'A':
            case 'a': cout << "Enter a PO number to add: ";
                      cin >> po;
                      if (st.isfull())
                         cout << "stack already full\n";
                      else    
                         st.push(po);
                      break;
            case 'P':
            case 'p': if (st.isempty())
                        cout << "stack already empty\n";
                      else {
                          st.pop(po);
                          cout << "PO #" << po << " popped\n";
                      } 
                      break;
        }
        cout << "Please enter A to add a purchase order,\n"
             << "P to process a PO, or Q to quit.\n";

    }
    cout << "Bye\n";
    return 0;
}

/*

    Please enter A to add a purchase order,
    P to process a PO, or Q to quit.
    A
    Enter a PO number to add: 15
    Please enter A to add a purchase order,
    P to process a PO, or Q to quit.
    P
    PO #15 popped
    Please enter A to add a purchase order,
    P to process a PO, or Q to quit.
    A
    Enter a PO number to add: 2
    Please enter A to add a purchase order,
    P to process a PO, or Q to quit.
    P
    PO #2 popped
    Please enter A to add a purchase order,
    P to process a PO, or Q to quit.
    Q
    Bye


*/