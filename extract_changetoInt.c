#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, flag, a[80];
    char s[100];
    j = 0;
    flag = 0;
    gets(s);
    for (i=0; i<=strlen(s); i++) {
        if (s[i]>='0' && s[i]<='9') {
            a[j++] = s[i] - '0';
        }
    }

    for (i=0; i<=j-1; i++) {
        if (a[i]!=0) {
            flag = 1;
        }
        if (flag)
        printf("%d", a[i]);
    }
    if (!flag)
        printf("0");

    return 0;
}