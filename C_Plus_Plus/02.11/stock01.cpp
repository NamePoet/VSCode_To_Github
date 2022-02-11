// stock00.cpp -- implementing the Stock class
// version 00
#include <iostream>
#include "stock01.h"

void Stock::acquire(const std::string & co, long n, double pr)
{
    company = co;
    if (n < 0)
    {
        std::cout << "Number of shares can't be negative; "
                  << company << " shares set to 0.\n";
        shares = 0;
    }
    else    
        shares = n;
    share_val = pr;
    set_tot();
}   

void Stock::buy(long num, double price)
{
    if (num < 0)
    {
        std::cout << "Number of shares purchased can't be negative. "
                  << "Transaction is aborted.\n";
    } 
    else 
    {
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock::sell(long num, double price)
{
    using std::cout;
    if (num < 0)
    {
        cout << "Number of shares sold can't be negative. "
             << "Transaction is aborted.\n";
    }
    else if (num > shares)
    {
        cout << "You can't sell more than you have! "
             << "Transaction is aborted.\n"; 
    }
    else 
    {
        shares -= num;
        share_val = price;
        set_tot();
    }
}

void Stock::update(double price)
{
    share_val = price;
    set_tot();
}

void Stock::show()
{
    using std::cout;
    using std::ios_base;
    // set format to #.###
    ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
    std::streamsize prec = cout.precision(3);

    cout << "Company: " << company  
         << " Shares: " << shares << '\n';
    cout << " Share price: $" << share_val;
    // set format to #.##
    cout.precision(2);
    cout << " Total Worth: $" << total_val << '\n';

    // restore original format
    cout.setf(orig, ios_base::floatfield);
    cout.precision(prec);
}



/*

    Company: NanoSmart Shares: 20
    Share price: $12.500 Total Worth: $250.00
    Company: NanoSmart Shares: 35
    Share price: $18.125 Total Worth: $634.38
    You can't sell more than you have! Transaction is aborted.
    Company: NanoSmart Shares: 35
    Share price: $18.125 Total Worth: $634.38
    Company: NanoSmart Shares: 300035
    Share price: $40.125 Total Worth: $12038904.38
    Company: NanoSmart Shares: 35
    Share price: $0.125 Total Worth: $4.38



*/