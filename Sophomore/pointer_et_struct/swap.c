#include <stdio.h>
void swap(int *a, int *b);
int main()
{
    int a, b;
    a = 1;
    b = 2;
    swap(&a, &b);
    printf("a=%d b=%d", a, b);

    return 0;
}

void swap(int *a, int *b) 
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}