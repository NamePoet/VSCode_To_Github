//ð������    ��ȥ��������
#include <stdio.h>
int main()
{
    int a[101], n, i, j, t;

    scanf("%d", &n);   //����n
    for (i=1; i<=n; i++) {      //ѭ������n��ͼ��ISBN��
        scanf("%d", &a[i]);
    }

    //��ʼð������
    for (i=1; i<=n-1; i++) {
        for (j=1; j<=n-i; j++) {
            if (a[j] > a[j+1]) {
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }

    printf("%d ", a[1]);   //�����һ����
    for (i=2; i<=n; i++) {    //��2ѭ����n
        if (a[i] != a[i-1]) {       //�����ǰ������ǵ�һ�γ��������
            printf("%d ", a[i]);
        }
    }

    getchar();  getchar();

    return 0;
}