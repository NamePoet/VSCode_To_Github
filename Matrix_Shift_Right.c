#include <stdio.h>
int main() 
{
    int i, j, m, n;
    int a[50][50];
    scanf("%d %d", &m, &n);
    for (i=1; i<=n; i++) {
        for (j=1; j<=n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (j=n; j>=1; j--) {
        for (i=1; i<=n; i++) {
            a[i][j+m%n] = a[i][j];
        }
    }
    if (m % n != 0) {
        for (j=1; j<=m%n; j++) {
            for (i=1; i<=n; i++) {
                a[i][j] = a[i][n+j%n];
            } 
        }
    }
    
    for (i=1; i<=n; i++) {
        for (j=1; j<=n; j++) {
            printf("%d ", a[i][j]);
            if (j == n && i != n) {
                printf("\n");
            }
        }
    }

    return 0;
}