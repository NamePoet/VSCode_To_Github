#include <stdio.h>
int main() 
{
    int i, j , n, max, count;
    int a[11], b[11];
    scanf("%d", &n);
    for (i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }

    max = a[0];
    j = 0;
    while (j < n) {
       for (i=0; i<n; i++) {
            if ( max <= a[i] ) {
                max = a[i];
                count = i;
            }
        }
        b[j++] = max;
        a[count] = -1234567890;
        max = a[0];
    }
    
    printf("%d", b[0]);
    for (i=1; i<n; i++) {
        printf(" %d",b[i]);
    }

    return 0;
}