#include <stdio.h>
#define MAXS 15

void StringCount( char s[] );
void ReadString( char s[] ); /* 由裁判实现，略去不表 */

int main()
{
    char s[MAXS];

    ReadString(s);
    StringCount(s);

    return 0;
}

void StringCount( char s[] ) 
{
    int i = 0;
    int letter, blank, digit, other;
    letter = blank = digit = other = 0;
    do 
    {
        if ( (s[i]>='a' && s[i]<='z' ) || (s[i]>='A' && s[i]<='Z') ) {
            letter++;
        } else if ( s[i]== ' ' || s[i]=='\n' ) {
            blank++;
        } else if ( s[i]>='0' && s[i]<= '9') {
            digit++;
        } else {
            other++;
        }
    i++;
    } while (s[i]!='\0');
    printf("letter = %d, blank = %d, digit = %d, other = %d", letter, blank, digit, other);

}