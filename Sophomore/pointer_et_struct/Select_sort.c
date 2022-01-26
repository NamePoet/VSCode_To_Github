#include <stdio.h>      //降序排列
#define N 10
int main()
{
    int i, j, t, imax;
    int a[N] = {1,4,2,6,8,3,0,9,7,5};
    for (i=0; i<N-1 ; i++) {
        imax = i;
        for (j=i+1; j<N; j++) {
            if (a[j] > a[imax]) {        //找出当轮循环的最大值
                imax = j;
            }
        }
        //选出最大数后，与当前i位置的数交换
        t = a[i];
        a[i] = a[imax];
        a[imax] = t;
    }   

    for (i=0; i<N; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

//选择排序