// try using "union"

#include <iostream>
struct widget
{
    char brand[20];
    int type;
    union id
    {
        long id_num;
        char id_char[20];
    }id_val;
};

int main()
{
    using namespace std;
    widget prize;
    if (prize.type == 1)
        cin >> prize.id_val.id_num;
    else
        cin >> prize.id_val.id_char;    
    return 0;
}