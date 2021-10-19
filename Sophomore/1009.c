#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, t, flag, a[100];
    char s[200];
    t = 0;
    gets(s);
    
    for (i=strlen(s)-1; i>=0; i--) {
        if (s[i] == ' ')  {
            for (j = i+1; s[j] != ' ' && s[j] != '\0'; j++) {
                printf("%c", s[j]);
            }
            printf(" ");
        }
        if (i == 0) {
            for (j=i; s[j] !=' '; j++) {
                printf("%c", s[j]);
            }
        }
    }
    
    
    return 0;
}
/*
if (s[i] == ' ') {
    //t表示空格的个数
    a[t++] = i;
}if (s[strlen(s)] == '\0')
        printf("True");
    printf("%d", strlen(s));
*/