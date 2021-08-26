#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int i  = 0;
    int sign = 1;
    char s[100];
    int b[50];
    memset(b,0,sizeof(b));
    int j = 0;
    int sum = 0;
    int k = 0;
    do {
        scanf("%c", &s[i]);
    } while (s[i++] != '#');
    
    for (i=0; i<=strlen(s)-1; i++) {
        if (s[i] == '-' && b[0]==0) {
            sign = -1;
        }
        if ( (s[i]>='a' && s[i]<='f') || (s[i]>='A' && s[i]<= 'F') ) {
            switch (s[i])
            {
                case 'a' : b[j++] = 10; break;
                case 'b' : b[j++] = 11; break;
                case 'c' : b[j++] = 12; break;
                case 'd' : b[j++] = 13; break;
                case 'e' : b[j++] = 14; break;
                case 'f' : b[j++] = 15; break;
                case 'A' : b[j++] = 10; break;
                case 'B' : b[j++] = 11; break;
                case 'C' : b[j++] = 12; break;
                case 'D' : b[j++] = 13; break;
                case 'E' : b[j++] = 14; break;
                case 'F' : b[j++] = 15; break;   
            }
        }   
            if (s[i]>='0' && s[i]<='9') {
                b[j++] =s[i] - '0';
            }
             
    }
    for (i=0,k=j-1; i<=j-1,k>=0; i++,k--) {
            sum += b[i]*pow(16,k);
        }   
    
    printf("%d", sign*sum);

    return 0;
} 

 