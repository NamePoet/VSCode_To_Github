#include <stdio.h>
int main() 
{
    int yyyy, mm, dd, leap_year_yes, days, i;
    int a[13];
    leap_year_yes = 0;
    scanf("%d/%d/%d", &yyyy, &mm, &dd);
    if ( (yyyy % 4 == 0 && yyyy % 100 !=0) || (yyyy % 400 == 0 ) ) {
        leap_year_yes = 1;
    }
    a[1] = a[3] = a[5] = a[7] = a[8] = a[10] = a[12] = 31;
    a[4] = a[6] = a[9] = a[11] = 30;
    if (leap_year_yes) {
        a[2] = 29;
    } else {
        a[2] = 28;
    }

    days = dd;
    for (i=1; i<mm; i++) {
        days += a[i];
    }
    printf("%d", days);

    return 0;
}