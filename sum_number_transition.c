#include <stdio.h>
int main()
{
    int a[10][10], i, j, k, t, b[3];
    int m, n, dig, sum;
    scanf("%d %d", &m, &n);
    for (i=0; i<m; i++) {
        for (j=0; j<n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i=0; i<m; i+=2) {
        t = 0;
        sum = 0;
        for (j=0; j<n; j++) {
            sum += a[i][j];
        }
        printf("%d:", sum);
        if (sum == 0) {
            printf("%5s","ling");
        }
        while (sum > 0) {
            b[t++] = sum % 10;
            sum /= 10;
        }
        
        t--;
        for (k=t; k>=0; k--) {
            switch(b[k]) {
                case 0: printf("%5s", "ling"); break;
                case 1: printf("%5s", "yi"); break;
                case 2: printf("%5s", "er"); break;
                case 3: printf("%5s", "san"); break;
                case 4: printf("%5s", "si"); break;
                case 5: printf("%5s", "wu"); break;
                case 6: printf("%5s", "liu"); break;
                case 7: printf("%5s", "qi"); break;
                case 8: printf("%5s", "ba"); break;
                case 9: printf("%5s", "jiu"); break;
            }
        }
        printf("\n");

    }

    return 0;
}