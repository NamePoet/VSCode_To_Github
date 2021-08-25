#include <stdio.h>
int main() 
{
    int i, n, a[1000], b[10],num, most_time, t;
    scanf("%d", &n);
    for (i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }

    for (i=0; i<10; i++) {
        b[i] = 0;
    }

    for (i=0; i<n; i++) {
        while (a[i] > 0) {
            num = a[i] % 10;
            b[num]++;
            a[i] /= 10;
        }
    }

    most_time = b[0];
    t = 0;
    for (i=0; i<10; i++) {
        if (b[i] >= most_time) {
            most_time = b[i];
        }
    } 

    printf("%d:", most_time);
    for (i=0; i<10; i++) {
        if (most_time == b[i]) {
            printf(" %d", i);
        }
    }
    
    return 0;
}