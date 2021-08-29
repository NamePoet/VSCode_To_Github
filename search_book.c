#include <stdio.h>

int main()
{
    struct book {
        char book_name[33];
        double price;
    }b[20];               //初始化结构体变量, 直接把结构体赋值过去


    int i, n, max_loc, min_loc;
    double max_price, min_price;
    scanf("%d", &n);
    getchar();
    for (i=0; i<n; i++) {
        gets(b[i].book_name);      
        scanf("%lf", &b[i].price);
        getchar();
    }
    max_price = b[0].price;
    max_loc = 0;
    min_price = b[0].price;
    min_loc = 0;
    for (i=0; i<n; i++) {
        if (b[i].price > max_price) {
            max_price = b[i].price;
            max_loc = i;
        } 
        if (b[i].price < min_price) {
            min_price = b[i].price;
            min_loc = i;
        }
    }

       printf("%.2f, %s\n",max_price, b[max_loc].book_name);
       printf("%.2f, %s",min_price, b[min_loc].book_name); 

    return 0;
}



/*
#include <stdio.h>
struct book
{
    char name[32];  //书名
    double price;    //价格
}s[10], high, low;
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("\n");    //每次输入数字后都会有一个'\n'，用scanf吞掉它
        gets(s[i].name);
        scanf("%lf",&s[i].price);
    }
        
    high = low = s[0];
    for (int i = 1; i < n; i++)
    {
        if (s[i].price > high.price)
            high = s[i];
        if (s[i].price < low.price)
            low = s[i];
    }
    printf("%.2lf, %s\n", high.price, high.name);
    printf("%.2lf, %s\n", low.price, low.name);

    return 0;
}
*/