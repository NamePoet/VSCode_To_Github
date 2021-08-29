#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i = 0;
    double *p, max = -1, min = 101, ave, sum = 0;
    scanf("%d", &n);

    p = (double*)malloc(n * sizeof(double));    // 除这步外都一样，就相当于定义了一个p[n]...,倒是可以避免空间浪费
    if (p == NULL) 
        exit(EXIT_FAILURE);

    for (i=0; i<n; i++) {
        scanf("%lf", &p[i]);
    }

    for (i=0; i<n; i++) {
        if (p[i]>max) {
            max = p[i];
        }
        if (p[i]<min) {
            min = p[i];
        }
        sum += p[i];
    }
    ave = sum / n;
    printf("average = %.2lf\n", ave);
    printf("max = %.2lf\n", max);
    printf("min = %.2lf", min);
    return 0;
}