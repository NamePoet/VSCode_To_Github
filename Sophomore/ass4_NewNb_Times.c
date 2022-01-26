#include <stdio.h>
int exist(int N, int M);
int main()
{
    int n, m, new_nb;
    double times;
    scanf("%d %d", &n, &m);
    if ( !exist(n,m) ) {
        printf("%d不存在于%d中", m, n); 
    } else {
        printf("%d,%.2f", exist(n,m), (double)n / exist(n,m));
    }
    return 0;
}

int exist(int N, int M)    //返回1表示存在，返回0表示不存在
{
    int t, temp, a[20], i, j, res, flag, flag2;
    temp = N;
    t = res = flag = flag2 = 0;
    while (temp > 0) {
        a[t++] = temp % 10;
        temp /= 10;
    }
    t--;
    for (i=t; i>=0; i--) {
        if (a[i] == M) {
            flag = 1;
            if (i == t) {
                t--;
                break;
            } else {
                for (j=i; j<t; j++) {
                    a[j] = a[j+1];
                }
                t--;
                flag2 = 1;
            }
            if (flag2) {
                break;
            }
        }
    }
    if (flag) {
        for (i=t; i>=0; i--) {
            res = res * 10 + a[i];
        }
    }
    
    return res;
}