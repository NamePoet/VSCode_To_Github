#include <stdio.h>
int comb(int a, int b);
int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    printf("%d", comb(m,n));
    return 0;
}


int comb(int a, int b)
{
    int res;
    res = 0;
    res += 1000*(a%10) + 10*(a/10%10) + 1*(b/10%10) + 100*(b%10);

    return res;

}