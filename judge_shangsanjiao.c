#include <stdio.h>
int main() 
{
    int i, j, k, n ,T, s, flag;
    int a[20][20];
    scanf("%d", &T);
    
    for (s=1; s<=T; s++) {
        flag = 1;
        scanf("%d", &n);
        for (j=1; j<=n; j++) {
            for (k=1; k<=n; k++) {
                scanf("%d", &a[j][k]);
            }
        }

        for (i=2; i<=n; i++) {
            for (j=1; j<=i-1; j++) {
                if (a[i][j] != 0) {
                    flag = 0;
                }
            }
        }
        if (flag) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }

    }

    return 0;

}

        



