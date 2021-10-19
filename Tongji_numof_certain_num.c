#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char s[200], ch[200];
    int i, j, a[100], t, flag, flag1;
    memset(a, 0 , sizeof(a));
    memset(ch, 'Z', sizeof(ch));
    t = 0;
    flag1 = 0;
    gets(s);
    for (i=0; i<strlen(s); i++) {
        flag = 1;
        if (s[i]>='a' && s[i]<='z') {
            flag1 = 1;
            for (j=i; j>=0; j--) {  //遍历ch数组查找有无元素与当前字符相同
                if (s[i] == ch[j]) {//如果找到
                    flag = 0;
                    a[j]++;
                }
            }
                if (flag) { //如果没找到
                    ch[t] = s[i];
                    a[t] = 1;
                    t++;
                }

        }

    }

    t--;
    if (flag1) {
        for (i=0; i<=t; i++) {
            printf("%c:%d\n", ch[i], a[i]);
        }
    } else {
        printf("None\n");
    }
    
    
    return 0;
}
