#include <stdio.h>
int main()
{
    int n, i, j, t, a[10];
    printf("Input n:");
    scanf("%d", &n);
    printf("Input %d integers:", n);
    for (i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    //����ð�����������������н�������
    for (i=0; i<n-1; i++) {
        for (j=i; j<n; j++) {
            if (a[i] < a[j]) {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    printf("After sorted:");
    for (i=0; i<n; i++) {
        printf("%4d", a[i]);
    }
    return 0;
}