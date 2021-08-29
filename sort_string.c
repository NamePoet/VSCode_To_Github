#include <stdio.h>
#include <string.h>
int main()
{
    int i, j;
    char c[5][81];
    char ch[81];
    scanf("%s %s %s %s %s", &c[0], &c[1], &c[2], &c[3], &c[4]);
    for (i=0; i<=4; i++) {
        for (j=0; j<i; j++) {
            if (strcmp( c[i], c[j] ) < 0 ) {
                strcpy( ch, c[i] );
                strcpy( c[i], c[j] );
                strcpy( c[j], ch );
            }
        }
    }
    printf("After sorted:\n");
    for (i=0; i<=4; i++) {
        puts(c[i]);
    }

    return 0;
}