#include <stdio.h>
int Search(int list[], int n, int x);
int main()
{
    int i, n, x, a[20];
    printf("Input n:");
    scanf("%d", &n);
    printf("Input %d integers:", n);
    for (i=1; i<=n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Input x:");
    scanf("%d", &x);
    if (Search(a, n, x) == -1) {
        printf("Not Found\n");
    } else {
        printf("index=%d", Search(a, n, x));
    }


    return 0;
}

int Search(int list[], int n, int x) 
{
    int i, flag;
    flag = 0;
    for (i=1; i<=n; i++) {
        if (x == list[i]) {
            flag = 1;
            return i-1;
        }
    }
    if (!flag) {
        return -1;
    }

}