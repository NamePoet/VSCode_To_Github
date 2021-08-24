#include <stdio.h>
int main()
{
    int n, i, j, t;
    int a[11][11];
    scanf("%d", &n);
    t = n-1;
    for (i=1; i<=n; i++) {
        for (j=1; j<=i; j++) {
            a[i][1] = 1; a[i][i] = 1;
        }
    }
    for (i=3; i<=n; i++) {
        for (j=2; j<=i-1; j++) {
            a[i][j] = a[i-1][j-1] + a[i-1][j];
        }
    }
    
    for (i=1; i<=n; i++) {
        for (j=t-1; j>=0; j--) {          //第一行有n-1个空格很关键
            printf(" ");
        }
        t--;
        for (j=1; j<=i; j++) {
            printf("%4d", a[i][j]);        // %4d表示输出数字占据4位
        }
        printf("\n");
    }
}


/*
       
        1                  //8格
       1   1               //7格
      1   2   1           //3格    
     1   3   3   1   
    1   4   6   4   1       //3格
   1   5  10  10   5   1    //3格   2格

*/

         