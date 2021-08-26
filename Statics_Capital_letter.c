#include <stdio.h>
#include <string.h>
int main() 
{
    int i, count;
    char s[100];
    gets(s);
    count = 0;
    for (i=0; i<=strlen(s); i++) {
        if ( s[i] > 'A' && s[i]<='Z' ) {
            if (s[i] != 'E' && s[i] != 'I' && s[i] != 'O' && s[i] != 'U') {
                count++;
            }
        }
    }
    printf("%d", count);

    return 0;
}