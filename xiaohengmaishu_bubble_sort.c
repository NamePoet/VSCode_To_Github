//冒泡排序    先去重再排序
#include <stdio.h>
int main()
{
    int a[101], n, i, j, t;

    scanf("%d", &n);   //读入n
    for (i=1; i<=n; i++) {      //循环读入n个图书ISBN号
        scanf("%d", &a[i]);
    }

    //开始冒泡排序
    for (i=1; i<=n-1; i++) {
        for (j=1; j<=n-i; j++) {
            if (a[j] > a[j+1]) {
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }

    printf("%d ", a[1]);   //输出第一个数
    for (i=2; i<=n; i++) {    //从2循环到n
        if (a[i] != a[i-1]) {       //如果当前这个数是第一次出现则输出
            printf("%d ", a[i]);
        }
    }

    getchar();  getchar();

    return 0;
}