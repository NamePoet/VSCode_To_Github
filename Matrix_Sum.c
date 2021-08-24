#include <stdio.h>
int main()
{
    int m, n, t, i, j, k, sum, s, a[100];
    scanf("%d %d", &m, &n);
    for (k=1; k<=m*n; k++) {
        scanf("%d", &a[k]);
    }

      t = 1;   
      s = n;
      for (i=1; i<=m; i++) {
        for (j=t; j<=n; j++) {
            sum += a[j];
        }
        t += s;
        n += s;;
        printf("%d\n", sum);
        sum = 0;
        }  
    
    return 0;
}