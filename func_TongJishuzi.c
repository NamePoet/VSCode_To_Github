#include <stdio.h>

int CountDigit( int number, int digit );

int main()
{
    int number, digit;

    scanf("%d %d", &number, &digit);
    printf("Number of digit %d in %d: %d\n", digit, number, CountDigit(number, digit));

    return 0;
}

#include <math.h>
int CountDigit( int number, int digit ) 
{
    int count, dig;
    count = 0;
    if (number == 0) {
        count = 1;
    }
    while ( fabs(number) > 0) {
        dig = ( (int) fabs(number) ) % 10;
        if (dig == digit) {
            count++;
        }
        number /= 10; 
    }

    return count;
}

