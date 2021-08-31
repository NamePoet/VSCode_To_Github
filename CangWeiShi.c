#include <stdio.h>
int main()
{
    char s[4][100];
    int i, j;
    for (i=0; i<4; i++) {
        gets(s[i]);
    }

    j = 0;
    for (i=0; i<4; i++) {
        while (s[i][j] != '\0') {
            j++;
        }
        printf("%c%c", s[i][j-2],s[i][j-1]);
        if (i==3) 
            printf("\n");
    }

    return 0;
}