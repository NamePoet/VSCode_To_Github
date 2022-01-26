#include <stdio.h>
void szt(int n);
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d", &n);
    szt(n);

    return 0;
}

void szt(int n)
{
    int i, j;
    for (i=1; i<=n; i++) {
            for (j=(n-i)*2; j>0; j--) {
                printf(" ");
            }
            for (j=1; j<=i; j++) {
                printf("%2d", j);
            }
            for (j=i-1; j>=1; j--) {
                printf("%2d", j);
            }
            printf("\n");
        }

}