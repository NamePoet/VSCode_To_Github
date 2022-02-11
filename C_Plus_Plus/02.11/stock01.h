// stock00.h -- Stock class interface
// version 00
#ifndef STOCK00_H_
#define STOCK00_H_


// inline限定符——内联函数
#include <string>

class Stock // class declaration
{
    private:
        std::string company;
        long shares;
        double share_val;
        double total_val;
        void set_tot() { total_val = shares * share_val; }  // 不是公有接口的组成部分
        // 定义位于类声明中的函数都将自动成为内联函数
    public:
        void acquire(const std::string & co, long n, double pr);
        void buy(long num, double price);
        void sell(long num, double price);
        void update(double price);
        void show();
}; // note semicolon at the end

#endif

