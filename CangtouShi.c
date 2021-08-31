#include <stdio.h>
int main()
{
    int i;
    char s[4][80];
    for (i=0; i<4; i++) {
        gets(s[i]);
    }
    
    for (i=0; i<4; i++) {
        printf("%c%c", s[i][0], s[i][1]);
        if (i == 3) 
            printf("\n");
    }
    return 0;
}