#include <stdio.h>
#define MAXS 30

char *search(char *s, char *t);
void ReadString( char s[] ); /* 裁判提供，细节不表 */

int main()
{
    char s[MAXS], t[MAXS], *pos;

    ReadString(s);
    ReadString(t);
    pos = search(s, t);
    if ( pos != NULL )
        printf("%d\n", pos - s);
    else
        printf("-1\n");

    return 0;
}

#include <string.h>
char *search(char *s, char *t)
{
    int i, j, k, flag;
    char *p;
    flag = 1;
    for (i=0; i<strlen(s) && i<MAXS ; i++) {
        if (s[i]==t[0]) {
            k = i;
            flag = 2;
            for (j=0; j<strlen(t) && strlen(t) < MAXS; j++) {
                if (t[j] == s[k])
                    k++;
                else 
                    flag = 0;
                    break;
            }
        
            if (flag == 2)
                p = &s[i];
                break;
        }
    }
    if (s[i] == '\0' || flag == 0  )
        p = NULL;

    return p;

}