#include <stdio.h>
#include <string.h>
int main()
{
    int i, loc, find;
    char ch, s[100];
    find = 0;
    ch = getchar();
    getchar();             //getchar() 清理缓冲区很重要！！
    gets(s);
    for (i=strlen(s); i>=0; i--) {
        if (ch == s[i]) {
            printf("index = %d", i);
            find = 1;
            break;
        }
    }
    if (find == 0) {
        printf("Not Found") ;
    }  
        

    return 0;
}