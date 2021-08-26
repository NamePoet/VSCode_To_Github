#include <stdio.h>
#include <string.h>
int main()
{
    char ch[100];
    int i, j;
    i = 0;
    while (ch[i++] != '\n') {
        ch[i] = getchar();
    }
    for (j=i-2; j>=0; j--) {
        printf("%c", ch[j]); 
    }

    return 0;
}


/*
#include <stdio.h> 
#include <string.h>
int main()
{
    char a[81];
    gets(a);
    for (int i = strlen(a) - 1; i >= 0; i--)
        printf("%c", a[i]);

    return 0;
}


*/



