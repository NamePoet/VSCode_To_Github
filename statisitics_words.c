#include <stdio.h>
int main()
{
    char ch[10000];
    int i,j, count, flag;
    flag = 0;
    count = 0;

    for (i=0; ;i++) {
        while ( ch[i] != '\n' ) {
            ch[i] = getchar();
            if ( ( ch[i] == ' ') && ( flag == 0 ) ){
                continue;
            }
            else if (  ( ch[i] >= 'a'  &&  ch[i] <= 'z' )  || (  ch[i] >= 'A'  &&  ch[i] <= 'Z' )  )  {
                flag = 1;
            }

            if ( ch[i] == ' ') {
                count++;
            } else if (  ( ch[i] >= 'a'  &&  ch[i] <= 'z' )  || (  ch[i] >= 'A'  &&  ch[i] <= 'Z' ) || ( ch[i] == '\'') || ( ch[i] =='.') )  {
                flag = 1;
            } else if ( ch[i] != '\n' ){
                flag = 0;
            }
            break;

        }
        if ( ch[i] == '\n'  &&  flag == 1 && ch[i-1] != ' ') {
            printf("%d", count+1);
            break;
        }
        else if ( ch[i] == '\n'  &&  flag == 1  && ch[i-1] == ' ' ) {
            for (j=i-1; ;j--) {
                if ( ch[j] == ' ') {
                    count--;
                } else {
                    break;
                }
            }
            printf("%d", count+1);
            break;
        } else if ( ch[i] == '\n'  &&  flag == 0 ) {
            printf("0");
            break;
        }
    }
    
    return 0;
}