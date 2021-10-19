#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    int i, j;
    printf("Enter a string:");
    gets(s);
    for (i=1; i<=strlen(s); i++) {
        printf("%d:",i);
        for (j=0; j<i-1; j++) {
            printf(" ");
        }
        for (j=i-1; j<strlen(s); j++) {
            printf("%c", s[j]);
        }
        printf("\n");
    }



    return 0;
}