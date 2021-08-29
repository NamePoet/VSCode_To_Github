#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int i, j, k, count, sum_10, flag;
    count = sum_10 = flag = 0;
    char ch[33];
    for (i=1; i<=32; i++) {
        ch[i] = getchar();
        count++;
        if (count % 8 ==0) {
            for (j=i, k=0; j>=i-7, k<=7; j--, k++) {
                sum_10 += ( ch[j]-'0' ) * pow(2, k); 
            } 
            if (!flag) {
                printf("%d", sum_10);
                sum_10 = 0;
                flag = 1;
            }else {
                printf(".%d", sum_10);
                sum_10 = 0;
            }

        }
    }

    return 0;
}