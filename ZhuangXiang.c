#include <stdio.h>
int main()
{
    int i, j, n, count, a[1000], b[1001];
    scanf("%d", &n);
    for (i=1; i<=n; i++) {
        scanf("%d", &a[i]);
        b[i] = 100;
    }

    for (i=1; i<=n; i++) {
        for (j= 1; j<= i; j++) {
            if (a[i] <= b[j]) {
                printf("%d %d\n", a[i], j);
                if (b[j] == 100) {
                    count = j;
                }
                b[j] = b[j] - a[i];
                break;
            }
        }  
    }

    printf("%d", count);
    return 0;
}

                    