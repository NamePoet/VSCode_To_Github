#include <stdio.h>

int factorsum( int number );
void PrintPN( int m, int n );

int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    if ( factorsum(m) == m ) printf("%d is a perfect number\n", m);
    if ( factorsum(n) == n ) printf("%d is a perfect number\n", n);
    PrintPN(m, n);

    return 0;
}

int factorsum( int number )
{
    int i, factsum;
    factsum = 0;
    for (i=1; i<number; i++) {
        if (number % i == 0) {
            factsum += i;
        }
    }

    return factsum;

}
void PrintPN( int m, int n )
{
    int j, k, flag;
    flag = 0;
    for (j=m; j<=n; j++) {
        if ( factorsum(j) == j ) {
            flag = 1;
            printf("%d = 1", j);
            for ( k=2; k<j; k++ ) {
                if (j % k ==0) {
                    printf(" + %d", k);
                }
            }
            printf("\n");
            
        } 

    }
    if (flag == 0) {
        printf("No perfect number");
    }
}