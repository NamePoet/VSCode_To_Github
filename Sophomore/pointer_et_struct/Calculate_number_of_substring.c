#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, count;
    count = 0;
    char s1[100], s2[100], ch[20][100];
    printf("please input two strings\n");
    gets(s1);
    gets(s2);
    i = j = 0;
    while (s1[i] != '\0') {
        while (s1[i] == s2[j] && s2[j] != '\0') {
            i++; j++;
        }
        if (s2[j] == '\0') {
            count++;
        }            
        j = 0;
        i++;
    }
    printf("%d", count);
    return 0;
}

