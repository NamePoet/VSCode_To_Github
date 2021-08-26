#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, flag;
    char s[100];
    int b[27];
    flag = 0;
    memset(b, 0, sizeof(b));
    gets(s);
    for (i=0; i<=strlen(s); i++) {
        if (s[i]>='A' && s[i]<='Z') {
            flag = 1; 
            b[ s[i]-64 ] ++;
            if (b[ s[i]-64 ] == 1) {
                printf("%c", s[i]);
            }
            
        }
    }

    if (flag == 0) {
        printf("Not Found");
    }



    return 0;
}