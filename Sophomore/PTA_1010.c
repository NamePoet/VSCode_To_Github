//1010一元多项式求导  （ 部分正确：15/25）
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, t, a[101], b[101];   //数组注意不要越界
    char ch;
    // int a[]={0};
    // int a[10] = {1,0,2,3,5}
    i = t = 0;
    do {
        scanf("%d %d", &a[i], &a[i+1]);
        i += 2;
    } while ((ch=getchar() != '\n'));

    /*
    while (a[i]!=0 && a[i+1]!=0) {
        scanf("%d %d", &a[i+2], &a[i+3]);
        i += 2;
    }*/
    if (a[0]==0 && a[1]==0) {
        b[0] = a[0];
        b[1] = a[1];
    }
    for (j=0; j<i; j+=2) {
            b[j] = a[j] * a[j+1];
            t++;
            if (a[j+1] == 0) {
                b[j+1] = 0;
                t++;
            } else {
                b[j+1] = a[j+1] - 1;
                t++;
            }
            
    }
    if (b[0]==0 && b[1]==0) {
        printf("%d %d", 0, 0);
    } else {
            printf("%d", b[0]);
            for (i=1; i<t; i++) {
                if (b[i-1]==0 && b[i]==0) {
                    ;
                }
                else {
                    printf(" %d", b[i]);
                }
            
        }
    }
    //getchar();

    return 0;
}
