#include <stdio.h>
#include <string.h>
int main()
{
    int i, count, ch;
    char s[100];
    count = 0;
    gets(s);
    scanf("%c", &ch);
    for (i=0; i<=strlen(s); i++) {
        if (s[i]==ch) {
            count++;
        }
    }

    printf("%d", count);


}