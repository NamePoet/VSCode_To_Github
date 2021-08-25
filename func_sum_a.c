#include <stdio.h>

int fn( int a, int n );
int SumA( int a, int n );

int main()
{
    int a, n;

    scanf("%d %d", &a, &n);
    printf("fn(%d, %d) = %d\n", a, n, fn(a,n));        
    printf("s = %d\n", SumA(a,n));    

    return 0;
}

int fn( int a, int n )
{
    int num;
    num = 0;
    for (; n>=1; n--) {
        num = num + a;
        a = a * 10;
    }

    return num;
}
int SumA( int a, int n )
{
    int i, sum;
    sum = 0;
    for (i=1; i<=n; i++) {
        sum += fn(a,i);
    }

    return sum;
}