#include <stdio.h>
int main() 
{
    int i, n, max, count;
    int a[11];
    scanf("%d", &n);
    for (i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    max = a[0]; 
    for (i=0; i<n; i++) {
        if ( a[i] > max ) {
            max = a[i];
            count = i;
        }
    }
    printf("%d", max);
    a[count] = -1;
    
    max = a[0]; 
    while (max != -1) {
        for (i=0; i<n; i++) {
        if ( a[i] >= max ) {
                max = a[i];
                count = i;
            }
        }
        if ( i == n) {
            printf(" %d", max);
            a[count] = -1;
            max = a[0]; 
        }
        
        
        
    }
    

    return 0;
}


