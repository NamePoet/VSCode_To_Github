#include <stdio.h>
#define N 10
int main()
{
    int a[N] = {1,4,2,6,8,3,0,9,7,5}; //≈≈≥……˝–Ú
    int i, j, t;
    for (i=1; i<=N-1; i++) {
        for (j=0; j<N-i+1; j++) {
            if (a[j] > a[j+1]) {
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }


    for (i=0; i<N; i++) {
        printf("%d ",a[i]);
    }


    return 0;
}