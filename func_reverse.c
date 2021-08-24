#include <stdio.h>

int reverse( int number );

int main()
{
    int n;

    scanf("%d", &n);
    printf("%d\n", reverse(n));

    return 0;
}

#include <math.h>
int reverse( int number ) 
{
    int t, temp, count, i, a[20], res;
    count = res = 0;
    temp = number;
    while ( fabs(temp) > 0 ) {
        a[count++] = temp % 10;
        temp /= 10;
    }
    count--;
    t = count;
    for (i=0; i<=t; i++) {
        res += a[count--] * pow(10,i);
    }

    return res;
}