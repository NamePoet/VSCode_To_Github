#include <stdio.h>
int main()
{
    int a[11][11];
    int n, i, j, sum;
    sum = 0;
    scanf("%d", &n);
    for (i=1; i<=n; i++) {
        for (j=1; j<=n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (i=1; i<n; i++) {
        for (j=1; j<n; j++) {
            if (i+j == n+1 ) {
                continue;
            }
            sum += a[i][j];
        }
    }
    printf("%d", sum);
    return 0;
}