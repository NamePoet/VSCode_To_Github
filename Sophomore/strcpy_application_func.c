#include <stdio.h>
#include <string.h>
void StringCopy(char s[], char t[], int m);
int main()
{
    int m, i;
    char s[100], t[100];
    printf("Enter a string: ");
    gets(s);
    printf("Enter m: ");
    scanf("%d", &m);
    StringCopy(s,t,m);
    puts(t);
    return 0;
}

void StringCopy(char s[], char t[], int m)
{
    strcpy(t, s+m-1);
}