#include <stdio.h>
int main()
{
    int i, j, m, n, flag;
    int a[50][50];
    scanf("%d %d", &m, &n);
    for (i=1; i<=m; i++) {
        for (j=1; j<=n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    flag = 0;
    for (i=2; i<=m-1; i++) {
        for (j=2; j<=n-1; j++) {
            if (  a[i][j] > a[i-1][j] && a[i][j] > a[i+1][j] && a[i][j] > a[i][j-1] && a[i][j] > a[i][j+1]  ) {
                printf("%d", a[i][j]);
                printf(" %d %d\n", i, j);
                flag = 1;
            }
            }
        }
    
    if (flag == 0) {
        printf("None %d %d", m, n);
    }
    return 0;
}