#include <stdio.h>
double fact(int n);
int main()
{
    int i;
    for (i=1; i<=5; i++) {
        printf("%d!=%.0f\n", i, fact(i));
    }


    return 0;
}

double fact(int n)
{
    int i;
    double res;
    res = 1;
    for (i=1; i<=n; i++) {
        res *= i;
    }

    return res;
}