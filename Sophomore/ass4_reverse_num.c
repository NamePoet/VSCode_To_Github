#include <stdio.h>
int fun(int n);
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", fun(n));

    return 0;
}

int fun(int n)
{
    int t, sum, flag;
    t = n;
    flag = 1;
    sum = 0;
    if (t<0) {
        t = -t;
        flag = -1;
    }
    while (t>0) {
        sum = sum * 10 + t % 10;
        t /= 10;
    }

    return flag*sum;

}