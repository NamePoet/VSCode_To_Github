#include <stdio.h>
#include <math.h>
int absolute(int x);
int main()
{
    int a, b, i;
    scanf("%d %d", &a, &b);
    for (i=a; i<=b; i++) {
        if (absolute(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}
int absolute(int x)
{
    int i, t, j, rev;
    rev = 0;
    for (i=2; i<=sqrt((double)x); i++) {
        if (x % i == 0) {
            return 0;
        }
    }
    if ( i > sqrt( (double)x ) ) {
        t = x;
        while (t > 0) {
            rev = rev * 10 + t % 10;
            t /= 10;
        }
        for (j=2; j<=sqrt((double)rev); j++) {
            if (rev % j == 0) {
                return 0;
            }
        }
        if (j > sqrt((double)rev)) {
            return 1;
        }
    }


}

