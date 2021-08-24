#include <stdio.h>
int main() 
{
    int i, n, a[11], count;
    scanf("%d", &n);
    count = 0;
    for (i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }

    for (i=1; i<n; i++) {
        if (count > 0) {
            printf(" %d", a[i]-a[i-1]);
            count++;
            if (count == 3) {
                printf("\n");
                count = 0;
                continue;
            }
        }
        if (count == 0) {
            printf("%d", a[i]-a[i-1]);
            count++;
        }
        
    }


    return 0;
}