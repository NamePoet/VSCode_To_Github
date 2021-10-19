#include <stdio.h>
int main()
{
    int year, month, day, day_diff, i, leap_year;
    scanf("%d-%d-%d",&year,&month,&day);
    leap_year = day_diff = 0;
    int m[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    for (i=1980; i<=year; i++) {
        if ( (i % 4 == 0 && i % 100 != 0) || (i % 400 == 0) )  {
            leap_year++;
        }
    }

    if ( (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) ) {
        if ( (month < 2) || (month == 2 && day < 29) ) {
            leap_year--;
        }
    }
    

    day_diff = (year - 1980) * 365 + leap_year + day-1;
    for (i=1; i<month; i++) {
        day_diff += m[i];
    }

    switch(day_diff % 7) {
        case 0: printf("Tuesday"); break; 
        case 1: printf("Wednesday"); break; 
        case 2: printf("Thursday"); break; 
        case 3: printf("Friday"); break; 
        case 4: printf("Saturday"); break; 
        case 5: printf("Sunday"); break; 
        case 6: printf("Monday"); break; 
    }


    return 0;
}