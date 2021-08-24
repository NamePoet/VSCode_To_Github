#include <stdio.h>
int main() 
{
    //x是四位数
    int i, x, a[4], t, s;
    scanf("%d", &x);
    while (x>0) {
        for (i=0; i<4; i++) {
            a[i] = x % 10;
            x /= 10;
        }
    }

    for (i=0; i<4; i++) {
        a[i] = (a[i] + 9) % 10;
    }

    t = a[1];
    a[1] = a[3];
    a[3] = t;

    s = a[0];
    a[0] = a[2];
    a[2] = s;

    printf("The encrypted number is ");
    for (i=3; i>=0; i--) {
        printf("%d", a[i]);
    }

    return 0;
}