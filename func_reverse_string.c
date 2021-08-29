#include <stdio.h>
#define MAXS 20

void f( char *p );
void ReadString( char *s ); /* 由裁判实现，略去不表 */

int main()
{
    char s[MAXS];

    ReadString(s);
    f(s);
    printf("%s\n", s);

    return 0;
}

void f( char *p )
{
    int index = 0;
    int i, t;
    while (p[index] != '\0') 
        index++;
    for (i=0; i<index/2; i++) {
        t = p[i];
        p[i] = p[index-1-i];
        p[index-1-i] = t;
    }

}