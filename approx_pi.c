#include <stdio.h>

int deb,i;
double factorial( int n );
double down( int i );
int main()
{
    int j,t;
    double res, eps, item;
    res = 1;
    item = 1.0 / 3.0;
    scanf("%le", &eps);
    if (eps > 1) {
        res = 1;
    }
    for (i=1 ; item>=eps ; i++) {
        item = factorial(i) / down(i);
        res += item;
    }
    printf("PI = %.5f", 2*res);
    return 0;
}

double factorial( int n )
{
    int m;
    double s; 
    s = 1;
    for (m=1;m<=n;m++) {
        s *= m;
    }
    return s;
}

double down( int i )
{
    int k;
    double conseq,mid;
    conseq = 1;
    mid = 3;
    if (i==1) {
        conseq = 3;
    }
    else if (i>1) {
        for (k = 1; k <= i; k ++) {
            conseq *= mid;
            mid += 2;
        }
    }
    
    return conseq;

}