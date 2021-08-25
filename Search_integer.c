#include <stdio.h>
int main() 
{
    int flag, i, n, x, loc;
    int a[21];
    scanf("%d %d", &n, &x);
    for (i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    flag = 0;

    for (i=0; i<n; i++) {
        if (flag == 0) {
            if (x == a[i]) {
                loc = i;
                printf("%d", loc);
                flag = 1;
            }
        } else {
            if (x == a[i]) {
                loc = i;
                printf(" %d", loc);
            }
        }
        
    }
    if (flag == 0) {
        printf("Not Found");
    }


    return 0;
}