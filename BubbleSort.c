#include <stdio.h>
int main() 
{
    int n,i,j,t;
    int a[20];
    printf("请输入你要读入的数的个数：\n");
    scanf("%d",&n);

    for (i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }

    for (i=0;i<n-1;i++) {
        for (j=0;j<n-i;j++) {
            if (a[j]<a[j+1]) {
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }

    for (i=0;i<n;i++) {
        printf("%d ",a[i]);
    }
}