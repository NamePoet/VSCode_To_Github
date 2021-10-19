#include <stdio.h>
#include <math.h>
int is_narcissistic(int number);
int main()
{
    int m, n, i;
    printf("Input m:");
    scanf("%d", &m);
    printf("Input n:");
    scanf("%d", &n);
    for (i=m; i<=n; i++) {
        if ( is_narcissistic(i) ) {
            printf("%d\n", i);
        }
    }

    return 0;
}

int is_narcissistic(int number)
{
    int sum, t;
    sum = 0;
    t = number;
    while (number > 0) 
    {
        sum += pow( (double) (number % 10) , 3.0);
        number /= 10;
    }

    if (sum == t) {
        return 1;
    } else {
        return 0;
    }

}