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

#include <math.h>
int narcissistic( int number )
{
    int dig, sum,t,count;
    count = 0;
    sum = 0;
    t = number;
    while (number>0) {
        count++;
        number /= 10;
    }
    number = t;
    while (number>0) {
        dig = number % 10;
        sum += pow(dig,count);
        number /= 10;        
    }

    if (sum == t) {
        return 1;
    } else {
        return 0;
    }
}

void PrintN( int m, int n )
{
    int i;
    for (i=m+1; i<=n-1; i++) {
        if ( narcissistic(i) ) {
            printf("%d\n", i);
        }
    }
}