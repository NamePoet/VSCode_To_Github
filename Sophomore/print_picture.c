#include <stdio.h>
int main()
{
    int i, j, n;
    scanf("%d", &n);
    for (i=n; i>=1; i--) {
        if (i == n) {
            for (j=1; j<=n; j++) {
                if (j == 1)
                    printf("*");
                else 
                    printf(" *");
            }
            printf("\n");
        } else {
            for (j=1; j<=n-i; j++) {
                printf(" ");
            }
            printf("*");
            for (j=1; j<=2*i-3; j++) {
                printf(" ");
            }
            if (i != 1)
                printf("*");
            printf("\n");
        }

    }

    return 0;
}