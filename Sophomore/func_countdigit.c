#include <stdio.h>
int countdigit(int number , int digit);
int main()
{
    int n;
    printf("Input an integer:");
    scanf("%d", &n);
    printf("Number of digit 2:%d", countdigit(n,2));

    return 0;
}

int countdigit(int number , int digit)
{
    int sum, t;
    sum = 0;
    t = number;
    while (t > 0) {
        if (t % 10 == digit) {
            sum++;
        }
        t /= 10;
    }

    return sum;


}