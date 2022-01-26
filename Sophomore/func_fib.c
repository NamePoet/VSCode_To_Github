#include <stdio.h>

int a[22], p;
int fib(int n);
int main()
{
    int i, j, m, n, low, high;
    a[1] = a[2] = 1;
    for (p=3; p<=21; p++) {
        a[p] = a[p-1] + a[p-2];
    }
    printf("Input m:");
    scanf("%d", &m);
    printf("Input n:");
    scanf("%d", &n);
    for (i=m; i<=n; i++) {
        for (j=1; j<=21; j++) {
            if (i == a[j]) {
                printf("%d\n", fib(j));
                if (i == a[j+1]) {
                    printf("%d\n", fib(j));
                }
                break;
            }
        }
    }

    return 0;
}

int fib(int n)
{
    return a[n];

}