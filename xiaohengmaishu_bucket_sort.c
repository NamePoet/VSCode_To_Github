#include <stdio.h>
int main()
{
    int a[1001], n, i, t;
    for (i=1; i<=1000; i++) {
        a[i] = 0;       //��ʼ��
    }

    scanf("%d", &n);    //����n
    for (i=1; i<=n; i++) {
        scanf("%d", &t);      //��ÿһ��ISBN�Ŷ�������t��
        a[t] = 1;    //��ǳ��ֹ���ISBN��
    }

    for (i=1; i<=1000; i++) {        //������ISBN�ų��ֹ����ӡ����
        if(a[i] == 1) {
            printf("%d ", i);
        }
    }

    getchar();   getchar();

    return 0;
}

//һ�����  һ��ȥ��
//Ͱ����ʱ�临�Ӷ�   O(N+M)