#include <stdio.h>

#define MAXS 10

char *match( char *s, char ch1, char ch2 );

int main()
{
    char str[MAXS], ch_start, ch_end, *p;

    scanf("%s\n", str);
    scanf("%c %c", &ch_start, &ch_end);
    p = match(str, ch_start, ch_end);
    printf("%s\n", p);

    return 0;
}

char *match( char *s, char ch1, char ch2 )
{
    char *p;
    int i;
    i = 0;
    while (s[i] != '\0' && s[i] != ch1) {
        i++;
    }
    p = &s[i];

    while (s[i] != '\0') {
        printf("%c", s[i]);
        if (s[i] == ch2) {
            printf("\n", s[i]);
            break;
        }
        i++;
    }
    if (s[i] == '\0')
        printf("\n");
    return p;
}