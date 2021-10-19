#include <stdio.h>
int main()
{
    int a[1001], n, i, t;
    for (i=1; i<=1000; i++) {
        a[i] = 0;       //初始化
    }

    scanf("%d", &n);    //读入n
    for (i=1; i<=n; i++) {
        scanf("%d", &t);      //把每一个ISBN号读到变量t中
        a[t] = 1;    //标记出现过的ISBN号
    }

    for (i=1; i<=1000; i++) {        //如果这个ISBN号出现过则打印出来
        if(a[i] == 1) {
            printf("%d ", i);
        }
    }

    getchar();   getchar();

    return 0;
}

//一边输出  一边去重
//桶排序时间复杂度   O(N+M)