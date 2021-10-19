//1005   部分正确
#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, t, temp, n, flag, a[10000], b[10000], c[101];
    void Callatz(int x, int b[]);
    void sort(int t, int c[]);
    t = 0;
    flag = 0;
    scanf("%d", &n);
    memset(b,0,sizeof(b));
    memset(c,0,sizeof(c));
    for (i=0; i<n; i++) {
        scanf("%d", &a[i]);
        flag = 0;
        Callatz(a[i], b);
        if (i>0) {
            for (j=1; j<=100; j++) {
                if (a[i] == j && b[j] == 1 ) {
                    flag = 1;
                    break;
                }  
            } 
            if (!flag) {
                c[t++] = a[i];
            }
        }        
    }
    sort(t, c);
    printf("%d", c[0]);
    for (j=1; j<t; j++) {
        printf(" %d", c[j]);
    }
    return 0;
}

void Callatz(int x, int b[]) 
{
    while (x != 1) {
        //b[x] = 1;
        if (x % 2 == 0) {
            x /= 2;
            b[x] = 1;
        }else if (x % 2 == 1){
            x = (3*x+1) / 2;
            b[x] = 1;
        }
    }

}

void sort(int t, int c[])
{
    int j, temp, i;
    for (i=0; i<t-1; i++) {
        for (j=i+1; j<t; j++) {
        if (c[j] > c[i]) {
           temp = c[j];
           c[j] = c[i];
           c[i] = temp;     
        }
        }
    }
}