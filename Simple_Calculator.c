#include <stdio.h>
int main() 
{
    char ch;
    int i, res, a, flag;
    flag = 1;
    scanf("%d", &res);
    for (i=1; ;i++) {
        ch = getchar();
        if (ch == '=') {
            printf("%d", res);
            break;
        }
        scanf("%d", &a);


        switch (ch)
        {
            case '+': res += a; break;

            case '-': res -= a; break;

            case '*': res *= a; break;

            case '/': if ( a == 0 ) {
                        printf("ERROR"); flag = 0 ; break;
                    } else {
                        res /= a; break;
                    }
            default: printf("ERROR"); flag = 0; break;
        }

        if (flag == 0)  break;
    }


    return 0;
}
