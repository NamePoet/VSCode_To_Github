#include <stdio.h>
int main()
{
    int i, x, a[10], loc_find, flag;
    flag = 0;
    for (i=0; i<10; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &x);
    for(i=0; i<10; i++) {
        if (a[i] == x) {
            loc_find = i;
            flag = 1;
        }
    }

    if (flag) {
        printf("Index is %d", loc_find);
    } else {
        printf("Not Found");
    }

    return 0;
}