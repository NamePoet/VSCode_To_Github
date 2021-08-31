#include <stdio.h>
#include <string.h>

#define MAXS 80

int getindex( char *s );

int main()
{
    int n;
    char s[MAXS];

    scanf("%s", s);
    n = getindex(s);
    if ( n==-1 ) printf("wrong input!\n");
    else printf("%d\n", n);

    return 0;
}

int getindex( char *s )
{
    if (s[0] == 'S' && s[1] == 'u') {
        return 0; 
    } else if (s[0] == 'M') {
        return 1;
    } else if (s[0] == 'T' && s[1] == 'u') {
        return 2;
    } else if (s[0] == 'W'){
        return 3;
    } else if (s[0] == 'T' && s[1] == 'h') {
        return 4;
    } else if (s[0] == 'F') {
        return 5;
    } else if (s[0] == 'S' && s[1] == 'a'){
        return 6;
    }
        else 
            return -1;

}

/*
int getindex( char *s )
{
    char week[7][10]={"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    for (int i = 0; i < 7; i++)
        if (strcmp (week[i], s) == 0)
            return i;
    return -1;
}
*/
