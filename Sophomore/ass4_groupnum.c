#include <stdio.h>
#include <string.h>
int extract_num(char *s);
int main()
{
    char str[100];
    printf("Enter a string:");
    gets(str);
    printf("digit=%d,%d", extract_num(str), 2*extract_num(str));

    return 0;
}

int extract_num(char *s)
{
    int i, res;
    res = 0;
    for (i=0; i<strlen(s); i++) {
        if (s[i]-'0' >= 0 && s[i]-'0' <= 9) {
            res = res * 10 + s[i]-'0';
        }
    }

    return res;
} 