#include <stdio.h>
#include <string.h>
int main() 
{
    
    int i;
    char s[100];
    i = 0;
    do 
    {
        scanf("%c", &s[i]);
    } while (s[i++] != '#');

    for (i=0; i<=strlen(s); i++) {
        if (s[i]>='a' && s[i]<='z') {
            s[i] = s[i] - 32;
        } else if (s[i]>='A' && s[i]<='Z') {
            s[i] = s[i] + 32;
        }
    }
    i = 0;
    while (s[i] != '#') {
        printf("%c", s[i]);
        i++;
    }
    
    return 0;
}

