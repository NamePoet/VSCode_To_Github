#include <stdio.h>
#include <string.h>
int main()
{
    int i, j;
    char s[100];
    gets(s);
    for(i=0; i<strlen(s); i++) {
        if ( (s[i] >= 'd' && s[i] <= 'z' ) || ( s[i] >='D' && s[i] <= 'Z') ) {
            s[i] = s[i] - 3;
        } else if (s[i] == 'a') {
            s[i] = 'x';
        } else if (s[i] == 'b') {
            s[i] = 'y';
        } else if (s[i] == 'c') {
            s[i] = 'z';
        } else if (s[i] == 'A') {
            s[i] = 'X';
        } else if (s[i] == 'B') {
            s[i] = 'Y';
        } else if (s[i] == 'C') {
            s[i] == 'Z';
        }
    }

    for (i=strlen(s)-1; i>=0; i--) {
        printf("%c", s[i]);
    }

    return 0;
}