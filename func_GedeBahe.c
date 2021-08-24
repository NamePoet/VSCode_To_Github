#include <stdio.h>
#include <math.h>

int prime( int p );
void Goldbach( int n );

int main()
{
    int m, n, i, cnt;

    scanf("%d %d", &m, &n);
    if ( prime(m) != 0 ) printf("%d is a prime number\n", m);
    if ( m < 6 ) m = 6;
    if ( m%2 ) m++;
    cnt = 0;
    for( i=m; i<=n; i+=2 ) {
        Goldbach(i);
        cnt++;
        if ( cnt%5 ) printf(", ");
        else printf("\n");
    }

    return 0;
}

#include <math.h>
int prime( int p )
{
    int i;
    if ( p == 1) {
        return 0;
    }
    for (i=2; i<=sqrt(p); i++) {
        if ( p % i == 0 ) {
            return 0;
        }
    }
    return 1;
} 
void Goldbach( int n )
{
    int i, j, flag, a[1000];
    int m , p;
    j = flag = 0;
    for (i=3; i<n; i++) {
        if ( prime(i) ) {
            a[j++] = i;
        }
    } 
    for (m=0; m<=j; m++) {
        for (p=0; p<=j; p++) {
            if ( n == a[m] + a[p]) {
                printf("%d=%d+%d", n, a[m], a[p]);
                flag = 1;
                break;
            }
        }
        if (flag == 1) {
            break;
        }

    } 
    
}