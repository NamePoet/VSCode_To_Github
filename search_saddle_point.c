#include <stdio.h>

int line_max(int i, int j, int n, int a[6][6]) ;
int col_min(int i, int j, int n, int a[6][6]) ;

int main() 
{
    int i, j, n, flag;
    int a[6][6];
    flag = 0;
    scanf("%d", &n);
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            if ( (line_max(i,a[i][j],n,a) == 1 )&& (col_min(j,a[i][j],n,a) == 1) ) {
                flag = 1;
                printf("%d %d", i, j);
                break;
            }
                
        }
        if (flag) {
            break;
        }
    }
    if (flag == 0) {
        printf("NONE");
    }

    return 0;
}

int line_max(int i, int x, int n, int a[6][6]) 
{
    int k;
    for (k=0; k<n; k++) {
        if (a[i][k] > x)
            return 0;
    }

    return 1;
}

int col_min(int j, int x, int n, int a[6][6])
{
    int k;
    for (k=0; k<n; k++) {
        if (a[k][j] < x)
            return 0;
    }

    return 1;
}