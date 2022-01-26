#include <stdio.h>
#include <string.h>
char* Search_Capital(char *ch);
int main()
{
    char s[100];
    gets(s);
    if (Search_Capital(s)) {
        puts(Search_Capital(s));
    } else {
        printf("No Capital Letter");
    }

    return 0;
}

char* Search_Capital(char *ch) 
{
    int i;
    for (i=0; i<strlen(ch); i++) {
        if ( *(ch+i) >= 'A' && *(ch+i) <= 'Z' ) {
            return ch+i;
        }
    }
    return NULL;

}