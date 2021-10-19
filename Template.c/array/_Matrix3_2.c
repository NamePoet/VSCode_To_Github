#include <stdio.h>
int main()
{
    int i, j, a[3][2], max, max_i, max_j;
    printf("Enter 6 integers:\n");
    for (i=0; i<3; i++) {
        for (j=0; j<2; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    max = a[0][0];
    for (i=0; i<3; i++) {
        for (j=0; j<2; j++) {
            if ( a[i][j] >= max ) {
                max = a[i][j];
                max_i = i;
                max_j = j;
            }
        }
    }

    for (i=0; i<3; i++) {
        for (j=0; j<2; j++) {
            printf("%4d", a[i][j]);
            if (j == 1) {
                printf("\n");
            }
        }
    }
    printf("max=a[%d][%d]=%d", max_i, max_j, max);




    return 0;
}