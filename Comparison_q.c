#include <stdio.h>
int main()
{
    double a1, b1, a2, b2;
    scanf("%lf/%lf %lf/%lf", &a1, &b1, &a2, &b2);
    if (a1/b1 > a2/b2) {
        printf("%.0lf/%.0lf > %.0lf/%.0lf", a1, b1, a2, b2);
    } else if (a1/b1 < a2/b2) {
        printf("%.0lf/%.0lf < %.0lf/%.0lf", a1, b1, a2, b2);
    } else {
        printf("%.0lf/%.0lf = %.0lf/%.0lf", a1, b1, a2, b2);
    }


    return 0;
}