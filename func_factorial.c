#include <stdio.h>

double fact( int n );

int main(void)
{    
    int i;
    double sum; 

    sum = 0; 
    for(i = 1; i <= 10; i++) 
        sum = sum + fact(i); 

    printf("1!+2!+...+10! = %f\n", sum); 
    return 0;
}

/* 你的代码将被嵌在这里 */

double fact( int n ) 
{
    int j;
    double res;
    res = 1;
    for (j=1; j<=n; j++) {
        res *= j;
    }

    return res;

}