#include <stdio.h>
#define MAXN 20

void strmcpy( char *t, int m, char *s );
void ReadString( char s[] ); /* 由裁判实现，略去不表 */

int main()
{
    char t[MAXN], s[MAXN];
    int m;

    scanf("%d\n", &m);
    ReadString(t);
    strmcpy( t, m, s );
    printf("%s\n", s);

    return 0;
}

void strmcpy( char *t, int m, char *s )
{
    int i, j;
    j = 0;
    for (i=m-1; i<=strlen(t)-1; i++) {
        s[j++] = t[i];
    }
    j--;
}