#include <stdio.h>
int main() 
{
    int i,n,num;
    int a[11];
    //输入你要输入的数据的个数
    scanf("%d",&n);
    for (i=1;i<=10;i++) {
        a[i] = 0;
    }
    //请依次按顺序输入数据
    for (i=1;i<=n;i++) {
        scanf("%d", &num);
        a[num]++ ; 
    }

    for (i=10;i>=1;i--) {
        while (a[i] > 0) {
            printf("%d ", i);
            a[i]--;
        }
    }

    getchar();getchar();

}