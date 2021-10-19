#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, k, m, n, head, tail, flag, flag2;
    char str[100], cut[100];
    head = 0;
    gets(str);
    gets(cut);
    for (i=0; i<strlen(str); ) {
        flag = 1;
        flag2 = 0;
        for (j=0; j<strlen(cut); j++) {
            if (str[i] == cut[j]) {
                for (k=i+1; flag ; k++) {
                    for (m=0; m<strlen(cut); m++) {
                        if (str[k] == cut[m]) {
                            break;
                        }
                    }
                    if (m >= strlen(cut) ) {
                        flag = 0;        //此处条件满足。则k就是下一个小字符串的首地址, 用赋值来使能循环
                        //j-1是上一个小字符串的尾地址
                        for (n=head; n<=i-1; n++) {
                            printf("%c", str[n]);
                            flag2 = 1;
                        }
                        if (n > j-1 && flag2) {
                            printf("\n");
                        }
                        if (!flag) {
                            head = k;
                            
                        }

                    }
                }
            }
        if (!flag) {
            break;
        }    
        }
        if (!flag) {
           i = head;
        } else {
           i++;
        }
        if (i == strlen(str)-1 && head!=0) {
            for (j=head; j<strlen(str); j++) {
                printf("%c", str[j]);
            }
        }
    }



    return 0;
}