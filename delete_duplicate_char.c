#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, b[500], max_ASCII;
    char s[100];
    gets(s);
    memset(b, 0, sizeof(b));
    max_ASCII = s[0];
    for (i=0; i<=strlen(s)-1; i++) {
        if (!b [ s[i] ]) {
            b[ s[i] ]++;
            if ( s[i]>max_ASCII ) {
                max_ASCII = s[i];
            }
                
        }
            
    }

    for (j=0; j<=max_ASCII; j++) {
        if (b[j] != 0) 
            printf("%c", j);
    }


    return 0;
}