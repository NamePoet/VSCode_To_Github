#include <stdio.h>
#include <string.h>
int main()
{
    char t[20];
    char s[5][20] = {"red", "yellow", "blue", "green", "purple"};
    for (int i=1; i<5; i++) {     //Bubble Sort
        for (int j=0; j<=5-i-1; j++) {
            if ( strcmp( s[j], s[j+1] ) == 1 ) {
                strcpy( t, s[j] );
                strcpy( s[j], s[j+1] );
                strcpy( s[j+1], t );
            }
        }
    }
    for (int i=0; i<5; i++) {
        printf("%s ", *(s+i));
    }
    
    return 0;
}