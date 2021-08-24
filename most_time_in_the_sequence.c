#include <stdio.h>
int main() 
{
    int i, j, n, a[1001] , b[1001], count, most_time, loc_most_time;
    scanf("%d", &n);
    for (i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    for (i=0; i<n; i++) {
        b[i] = 0;
    }
    for (i=0; i<n; i++) {
        b[i]++;
        for (j=i+1; j<n; j++) {
            if (a[j] == a[i]) {
                b[i]++;
            }
        }
    }

    most_time = b[0];
    loc_most_time = 0;
    for (i=0; i<n; i++) {
        if (b[i] > most_time) {
            most_time = b[i];
            loc_most_time = i;
        }
    }
    
    printf("%d %d", a[loc_most_time] , most_time);


    return 0;
}