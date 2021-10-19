#include <stdio.h>
#include <math.h>
int main()
{
    int n, a[100], i, j, t, isPrime, first;
    t = 0;
    first = 1;
    printf("Input an integer:");
    scanf("%d", &n);
    printf("%d=", n);
    for (i=2; i<=100; i++) {
        isPrime = 1;
        for (j=2; j<=sqrt((double)i); j++) {
            if (i % j == 0) {
                isPrime = 0;
            }    
        }
        if (isPrime)
            a[t++] = i;      //t的值就是素数的个数
    }
    while (n > 1) {
        for (j=0; j<=t-1; j++) {
            if (first) {
                if (n % a[j] == 0) {
                    printf("%d", a[j]);
                    n /= a[j];
                    first = 0;
                }
            }
        
        while ( (!first) && (n % a[j] == 0) ) {
            printf("*%d",a[j]);
            n /= a[j];
        }
        
        }
    }
    
   


    return 0;
}