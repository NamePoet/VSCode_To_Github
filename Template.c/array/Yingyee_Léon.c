#include <stdio.h>
int main()
{
    double a[13], sum;

    int i, j, t;
    sum = 0;
    for (i=1; i<=12; i++) {
        scanf("%lf", &a[i]);
        sum += a[i];
    }
    for (i=1; i<=12; i++) {
        printf("%2d(%2.0f%%)",i, a[i]/sum*100);
        if (  ( (int) (a[i]/sum*1000) % 10 )  >= 5 ) {
            t = (int) (a[i]/sum*100) + 1;
        } else {
            t = (int) (a[i]/sum*100);
        }
        printf(" ");
        for (j=1; j<=t; j++) {
            printf("#");
        }
        printf("\n");
    }


    return 0;
}

