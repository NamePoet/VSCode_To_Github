#include <stdio.h>

int fib( int n );
void PrintFN( int m, int n );

int main()
{
    int m, n, t;

    scanf("%d %d %d", &m, &n, &t);
    printf("fib(%d) = %d\n", t, fib(t));
    PrintFN(m, n);

    return 0;
}


int fib(int n)
{
    if (n <= 2)
        return 1;
    return fib(n - 1) + fib(n - 2);
}
void PrintFN(int m, int n)
{
    int a[100], j = 0, flag = 0;
    int i;
    for ( i = 1; i <= 20; i++)
        if (m <= fib(i) && n >= fib(i))
        {
            a[j++] = fib(i);
            flag = 1;
        }
    if (flag)
    {
        printf("%d", a[0]);
        for ( i = 1; i < j; i++)
            printf(" %d", a[i]);
    }
    else
        printf("No Fibonacci number");
}
