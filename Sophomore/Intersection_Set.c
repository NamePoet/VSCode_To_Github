#include <stdio.h>
int mix(int a[], int b[], int c[]);
int main()
{
    int i, a[5], b[5], c[5];
    printf("Please Enter Array A,5 digits:");
    for (i=0; i<5; i++) {
        scanf("%d", &a[i]);
    }
    printf("Please Enter Array B,5 digits:");
    for (i=0; i<5; i++) {
        scanf("%d", &b[i]);
    }

    printf("A B intersection is:");
    for (i=0; i<=mix(a,b,c); i++) {
        printf("%4d", c[i]);
    }

    return 0;
}

int mix(int a[], int b[], int c[])
{
    int i, j, t;
    t = 0;
    for (i=0; i<5; i++) {
        for (j=0; j<5; j++) {
            if (a[i] == b[j]) {
                c[t++] = a[i];      
            }
        }
    }

    return t-1;
}