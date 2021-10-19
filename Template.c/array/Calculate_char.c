#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, flag;
    char s[100];
    flag = 0;
    printf("Enter a string:");
    gets(s);
    for (i=0,j=strlen(s)-1; i<strlen(s),j>=0; i++,j--) {
        if (s[i] != s[j]) {
            flag = 1;
            break;
        }
    } 
    if (flag) {
        printf("It is not a palindrome");
    } else {
        printf("It is a palindrome");
    }

    return 0;
}