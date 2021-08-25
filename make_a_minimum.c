#include <stdio.h>
int main() 
{
    int i, j, t,  a[10], b[50],Weishu, mark;
    for (i=0; i<10; i++) {
        scanf("%d", &a[i]);
    }

    Weishu = 0;
    for (i=0; i<10; i++) {
        Weishu += a[i];
    }
    for (i=0; i<Weishu; i++) {
        b[i] = 0;
    }

    t = 0;
    for (i=0; i<10 ; i++) {
        if (a[i] > 0) {
            for (j=0; j<a[i]; j++,t++) {
                b[t] = i;
            }
        }
    }

    for (i=1; i<10; i++) {
        if (a[i] > 0) {
            mark = i;
            break;
        }
    }
    for (i=0; i<Weishu; i++) {
        if (mark == b[i]) {
            for (j=i; j<Weishu; j++) {
                b[j] = b[j+1];
            }
            break;
        }
        
    }
    printf("%d", mark);
    for (i=0; i<Weishu-1; i++) {
        printf("%d", b[i]);
    }

    return 0;
}