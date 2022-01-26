#include <stdio.h>
void date(int y, int m, int d, int a[]);
int main()
{
    int i, year, month, day, quelle_date;
    int a[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    printf("Enter year month day:");
    scanf("%d %d %d", &year, &month, &day);

    date(year, month, day, a);

    return 0;
}

void date(int y, int m, int d, int a[]) {
    int i, quelle_date;
    quelle_date = 0;
    if ( (y % 4 == 0 && y % 100 !=0) || (y % 400 == 0) ) {
        a[2] = 29;
    }
    for (i=1; i<m; i++) {
        quelle_date += a[i];
    }
    quelle_date += d;
    printf("day of year is ");
    printf("%d", quelle_date);
}