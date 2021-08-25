#include <stdio.h>
int main()
{
    int i, n;
    int a[11];
    scanf("%d", &n);
    for (i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    printf("%d", a[n-1]);
    for (i=n-2 ; i>=0; i--) {
        printf(" %d", a[i]);
    }
    return 0;
}