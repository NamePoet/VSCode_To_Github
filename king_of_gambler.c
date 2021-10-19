#include <stdio.h>
int main()
{
    char s[7][7];
    int  i, j, a[6], flag;
    for (i=0; i<6; i++) {
        scanf("%s", s[i]);
    }

    for (i=0; i<6; i++) {
        flag = 0;
        for (j=0; j<6; j++) {
            if (s[i][j] == 'A') {
                flag = 1;
                a[i] = j+1;
            }
        }
        if (!flag) {
            a[i] = 0;
        }
    }

    for (i=0; i<6; i++) {
        printf("%d", a[i]);
    }


    return 0;
}