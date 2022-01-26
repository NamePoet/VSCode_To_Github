#include <stdio.h>
#include <string.h>
void str_bin(char str1[], char str2[]);
int main()
{
    char s1[150], s2[150];
    gets(s1);
    gets(s2);
    str_bin(s1,s2);
    puts(s1);

    return 0;
}

void str_bin(char str1[], char str2[])
{
    int m, n, i, j;
    char t;
    m = strlen(str1);
    n = strlen(str2);
    strcat(str1, str2);
    for (i=1; i<strlen(str1)-1; i++) {
        for (j=0; j<=strlen(str1)-1-i-1; j++) {
            if (str1[j] > str1[j+1]) {
                t = str1[j];
                str1[j] = str1[j+1];
                str1[j+1] = t;
            }
        }
    }

}

