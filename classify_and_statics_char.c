#include <stdio.h>
#define MAXS 15

void StringCount( char *s );
void ReadString( char *s ); /* 由裁判实现，略去不表 */

int main()
{
    char s[MAXS];

    ReadString(s);
    StringCount(s);

    return 0;
}

void StringCount( char *s )
{
    int i;
    int cnt_capital , cnt_lowercase , cnt_space , cnt_number , cnt_others;
    cnt_capital = cnt_lowercase = cnt_space = cnt_number = cnt_others = 0;
    for (i=0; i<=strlen(s)-1; i++) {
        if (s[i]>='A' && s[i]<='Z') 
            cnt_capital++;
        else if (s[i]>='a' && s[i]<='z')
            cnt_lowercase++;
        else if (s[i]>='0' && s[i]<='9')
            cnt_number++;
        else if (s[i]==' ')
            cnt_space++;
        else cnt_others++;
    }
    printf("%d %d %d %d %d", cnt_capital, cnt_lowercase, cnt_space, cnt_number, cnt_others);
}