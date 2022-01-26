#include <stdio.h>
void pointer_find_max_and_min(int a, int b, int *pmax, int *pmin);
int main()
{
    int max, min, a, b;   
    scanf("%d %d", &a, &b);
    pointer_find_max_and_min(a, b, &max, &min);        //用指针变量相当于还少了一个赋值操作，因为直接把值写入了地址
    printf("max=%d min=%d", max, min);

    return 0;
}

void pointer_find_max_and_min(int a, int b, int *pmax, int *pmin)      //指针变量存的是一个地址的值
{

    if (a > b) {
        *pmax = a;
        *pmin = b;
    } else {
        *pmax = b;
        *pmin = a;
    }

} 