#include <stdio.h>      //��������
#define N 10
int main()
{
    int i, j, t, imax;
    int a[N] = {1,4,2,6,8,3,0,9,7,5};
    for (i=0; i<N-1 ; i++) {
        imax = i;
        for (j=i+1; j<N; j++) {
            if (a[j] > a[imax]) {        //�ҳ�����ѭ�������ֵ
                imax = j;
            }
        }
        //ѡ����������뵱ǰiλ�õ�������
        t = a[i];
        a[i] = a[imax];
        a[imax] = t;
    }   

    for (i=0; i<N; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

//ѡ������