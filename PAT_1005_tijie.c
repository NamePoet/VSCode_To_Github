#include <stdio.h>
int main()
{
    int k, n, i, j;
    int num[10000] = {0};
    scanf("%d", &k);
    int v[k];
    for (i=0; i<k; i++)
    {
        scanf("%d", &n);
        v[i] = n;
        if (num[n] == 0) {
            while (n != 1) {
                if (n%2 != 0) 
                    n = 3*n+1;
                n = n/2;
                    if (num[n] == 1)
                        break;
                    num[n] = 1;
                
            }
        }
    }

    int mid;
    for (i=0; i<k-1; i++) {
        for (j=i+1; j<k; j++) {
            if (v[j] > v[i]) {
                mid = v[j];
                v[j] = v[i];
                v[i] = mid;
            }
        }
    }

    int flag = 0;
    for (i=0; i<k; i++) {
        if (num[v[i]] == 0) {
            if (flag == 1)
                printf(" ");
            printf("%d", v[i]);
            flag = 1;
        }
    }

    return 0;
}