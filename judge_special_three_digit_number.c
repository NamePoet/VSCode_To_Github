#include <stdio.h>
#include <math.h>

int search( int n );

int main()
{
    int number;

    scanf("%d",&number);
    printf("count=%d\n",search(number));

    return 0;
}

int search( int n )
{
    int i, j, k, count;
    int a[3];
    count = 0;
    for (i=101; i<=n; i++) {
        k = i;
        for (j=0; j<3,k>0; j++) {
                a[j] = k % 10;
                k /= 10;
        }
        
        if ( (sqrt(i) == (int) sqrt(i) ) && (a[0]==a[1] || a[1]==a[2] || a[0]==a[2]) ){
            count++;
        }
    }

    return count;
}