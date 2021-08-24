#include <stdio.h>
int main()
{
    int i, j, n, x;
    int a[10];
    scanf("%d", &n);
    if (n==0) {
        scanf("%d", &x);
    } else {
        for (i=0; i<n; i++) {
            scanf("%d", &a[i]);
        }
        scanf("%d", &x);
    }
   
    if ( n == 0 ) {
        printf("%d ", x);
    }
    if ( n == 1 ) {
        if ( a[0] < x ) {
            printf("%d %d ", a[0], x);
        } else if ( a[0] > x) {
            printf("%d %d ", x, a[0]);
        }
    } else {
        for (i=0; i<n; i++) {
            if ( x >= a[i] && x <= a[i+1] ){
                for (j=n-1; j>i; j--) {
                    a[j+1] = a[j];
                }
                a[i+1] = x;
                break;
            }
        } 
        if ( x < a[0] ) {
            for (i=n-1; i>=0; i--) {
                a[i+1] = a[i];
            } 
            a[0] = x;
        }
          
        if (n != 0) {
            for (i=0; i<=n; i++) {
                printf("%d ", a[i]);
            }  
        }
        
    }
    }
        
    