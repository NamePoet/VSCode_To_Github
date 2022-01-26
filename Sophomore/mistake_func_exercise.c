#include <stdio.h>

int b=1;

int fun(int x)

{
    static int b=3;
    b+=x;
    printf("%d ",b);
    return b;

}

int main()

{
    int a=2;
    printf("%d\n",fun(a+fun(b)));
    return 0;
}
