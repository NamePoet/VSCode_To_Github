#include <stdio.h>
int main()
{
    int i, n, a[11], min, max, loc_min, loc_max, t;
    scanf("%d", &n);
    for (i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    min = a[0];
    loc_min = 0;
    for (i=0; i<n; i++) {
        if (a[i] < min) {
            min = a[i];
            loc_min = i;
        }
    }
    t = a[loc_min];
    a[loc_min] = a[0];
    a[0] = t;


    max = a[0];
    loc_max = 0;
    for (i=0; i<n; i++) {
        if (a[i] > max) {
            max = a[i];
            loc_max = i;
        }
    }

    t = a[loc_max];
    a[loc_max] = a[n-1];
    a[n-1] = t;

    for (i=0; i<n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}