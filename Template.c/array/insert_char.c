#include <stdio.h>
#include <string.h>
int main()
{
    int i, loc;
    char s[10], ch;
    printf("Enter a string:");
    gets(s);
    scanf("%d", &loc);
    getchar();
    ch = getchar();
    for (i=strlen(s)-1; i>=loc; i--) {
        s[i+1] = s[i];
    }
    s[loc] = ch;
    puts(s);
    return 0;
}