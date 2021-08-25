#include <stdio.h>

int narcissistic( int number );
void PrintN( int m, int n );

int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    if ( narcissistic(m) ) printf("%d is a narcissistic number\n", m);
    PrintN(m, n);
    if ( narcissistic(n) ) printf("%d is a narcissistic number\n", n);

    return 0;
}

int pow(int x, int n)
{
    int s = 1;
    for (int i = 0; i < n; i++)
        s *= x;
    return s;
}
int narcissistic(int number)
{
    int n = 0, count = 0, a[5];
    int num = number;
    for (int i = 0;; i++)
    {
        a[i] = number % 10;
        count++;
        if (number / 10 <= 0)
            break;
        number /= 10;
    }
    for (int i = 0; i < count; i++)
        n += pow(a[i], count);
    if (n == num)
        return 1;
    return 0;
}
void PrintN(int m, int n)
{
    for (int i = m + 1; i < n; i++)
        if (narcissistic(i))
            printf("%d\n", i);
}

