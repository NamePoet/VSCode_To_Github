#include <stdio.h>
int main()
{
    int *p, a[5] = {0,1,2,3,4};
    p = a;
    printf("%d\n", *++p);
    printf("%d\n", a[0]);
    printf("/\n");
    printf("%d\n",(*p)--);
    printf("%d", a[1]);
    return 0;
}