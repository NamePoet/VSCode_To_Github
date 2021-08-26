#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    char s[100];
    gets(s);
    for (i=0; i<=strlen(s); i++) {
        if (s[i]>='A' && s[i]<='Z') {
            s[i] = 155 - s[i];
        }
    }
    
    for (i=0; i<=strlen(s); i++) {
        printf("%c", s[i]);
    }

    return 0;
}