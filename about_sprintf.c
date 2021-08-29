#include <stdio.h>
#include <string.h>
int main()
{
    int i = 100;
    char s[100];
    sprintf(s, "%.2f", (double) i );
    puts(s);



    return 0;
}