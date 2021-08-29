#include <stdio.h>
#define MAXN 10

void f( long int x, char *p );

int main()
{
    long int x;
    char s[MAXN] = "";

    scanf("%ld", &x);
    f(x, s);
    printf("%s\n", s);

    return 0;
}

#include <math.h>
#include <string.h>
void f( long int x, char *p )
{   
    char a[100];
    int count = 0;
    int i, j, t;
    memset(a,0,sizeof(a));
    i = 0;
    if (x < 0) {
        x = -x;
        printf("-");
    }
    if (x == 0) {
        p[0] = '0';
        p[1] = '\0';
        return p;
    }
    while (x > 0) {
        switch (x % 16)
        {
            case 10: a[i++] = 'A'; break;
            case 11: a[i++] = 'B'; break;
            case 12: a[i++] = 'C'; break;
            case 13: a[i++] = 'D'; break;
            case 14: a[i++] = 'E'; break;
            case 15: a[i++] = 'F'; break;
            default:
                a[i++] = x % 16 + 48 ;
                break;
        }
        x /= 16; 
    }
    a[i] = '\0';
    i--;
    t = i;
    for (j=0; j<=t; j++) {
        p[j] = a[i--];
    }
    p[j] = '\0';

    return p;
}