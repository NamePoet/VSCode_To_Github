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
            for (j=i; j>=0; j--) {  //����ch�����������Ԫ���뵱ǰ�ַ���ͬ
                if (s[i] == ch[j]) {//����ҵ�
                    flag = 0;
                    a[j]++;
                }
            }
                if (flag) { //���û�ҵ�
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
