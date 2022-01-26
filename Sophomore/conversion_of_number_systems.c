#include <stdio.h>
#include <string.h>
int Conversion_NumSys(int n, int num_sys, char a[]);
int main()
{
    int i, n, num_sys;
    char a[50];
    scanf("%d %d", &n, &num_sys);
    memset(a, -1, sizeof(a));

    printf("the converted the number is:");
    for (i=Conversion_NumSys(n, num_sys, a); i>=0; i--) {
        printf("%c", a[i]);
    }
    return 0;
}

int Conversion_NumSys(int n, int num_sys, char a[])
{
    char ch;
    int t = 0, temp;
    temp = n;
    while (temp > 0) {
        switch(temp % num_sys) {
            case 10: ch = 'A'; break;
            case 11: ch = 'B'; break;
            case 12: ch = 'C'; break;
            case 13: ch = 'D'; break;
            case 14: ch = 'E'; break;
            case 15: ch = 'F'; break;
            default: 
                ch = temp % num_sys + '0';
        }
        a[t++] = ch;
        temp /= num_sys;
    }

    t--;
    return t;
     
}

