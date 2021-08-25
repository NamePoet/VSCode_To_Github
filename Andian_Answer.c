#include <stdio.h>

int is_line_max(int n, int x, int i, int a[6][6]);//判断是否为行最大值
int is_rank_min(int n, int x, int j, int a[6][6]);//判断是否为列最小值

int main()
{
    int n, flag = 0, a[6][6];
    scanf("%d", &n);
    int i,j;

    for ( i = 0; i < n; i++)    //按格式输入
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for ( i = 0; i < n; i++)
        for ( j = 0; j < n; j++)
            if (is_line_max(n, a[i][j], i, a))
                if (is_rank_min(n, a[i][j], j, a))
                {
                    printf("%d %d\n", i, j);
                    flag = 1;    //如果是鞍点，就做标记
                }

    if (flag == 0)
        printf("NONE");
                
    return 0;
}
int is_line_max(int n, int x, int i, int a[6][6])
{
    int k;
    for ( k = 0; k < n; k++)
        if (x < a[i][k])
            return 0;

    return 1;
}
int is_rank_min(int n, int x, int j, int a[6][6])
{
    int k;
    for ( k = 0; k < n; k++)
        if (x > a[k][j])
            return 0;

    return 1;
}
