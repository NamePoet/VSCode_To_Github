#include <stdio.h>
#include <math.h>
#include <time.h>

double funcos( double e, double x );

int main()
{    
    double e, x;

    scanf("%lf %lf", &e, &x);
    printf("cos(%.2f) = %.6f\n", x, funcos(e, x));
    
        clock_t start , stop;
	    int i=0;
	    double s=0;
	    start=clock();
	    for(i;i<1000000000;i++){
	    
	        stop=clock();
	        s=(stop-start)/CLK_TCK;
	      
        }
          printf("程序运行时间为：%lf",s);
    

    return 0;
}

#include <math.h>
double fac( int n ) 
{
    double s = 1;
    int i;
    for ( i = 1; i <= n; i++) {
        s *= i;
    }
    return s;
}
double funcos( double e, double x )
{
    int sign, i, j, factorial;
    double fin,t;
    factorial = 2;
    sign = -1;
    fin = t = 1;
    for (i=2; fabs(t)>=e ;i+=2)
    {
        t = sign * pow(x,i) / fac(i);
        fin += t;
        sign = -sign;
        
    }

    return fin;
}