//�ο�����ѡ������������㷨
#include <stdio.h>
#include <string.h>   //�ں�memset()����
int main()
{
    int i, j, n, x, y, tot, a[10][10];
    tot = 0;
    scanf("%d", &n);
    memset(a, 0, sizeof(a));   //������Ԫ��ȫ����ʼ��Ϊ0���Ա�֮���ж�
    tot = a[x = 0][y = 0] = 1;

    while (tot < n * n) {
        //�Ƚ���Ԥ�У����ھͲ������ߣ���a[x][y+1]�ȼ���a[x][y+1]==0 
        while (y + 1 < n && !a[x][y + 1]) a[x][++y] = ++tot;         //   !a[x][y+1]�����ж��Ƿ��б���ֵ
        while (x + 1 < n && !a[x + 1][y]) a[++x][y] = ++tot;
        while (y - 1 >=0 && !a[x][y - 1]) a[x][--y] = ++tot;
        while (x - 1 >=0 && !a[x - 1][y]) a[--x][y] = ++tot;
    }

    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            printf("%3d", a[i][j]);
        }    
            printf("\n");  
    }


    return 0;
}