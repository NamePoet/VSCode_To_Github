#include <stdio.h>
#include <string.h>
int main()
{
    int i, j;
    char ch, s[100];
    printf("Enter a string:");
    gets(s);
    ch = getchar();
    for (i=0; i<strlen(s); i++) {
        if (s[i] == ch) {
            for (j=i+1; j<strlen(s); j++) {
                s[j-1] = s[j];
            }
        }
    }
    s[strlen(s)-1] = '\0';
    puts(s);
    return 0;
}