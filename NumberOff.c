#include <stdio.h>
#define MAXN 20

void CountOff( int n, int m, int out[] );

int main()
{
    int out[MAXN], n, m;
    int i;

    scanf("%d %d", &n, &m);
    CountOff( n, m, out );   
    for ( i = 0; i < n; i++ )
        printf("%d ", out[i]);
    printf("\n");

    return 0;
}

#include <string.h>
void CountOff( int n, int m, int out[] )
{
    int i, j, count, index;
    int s[MAXN];
    index = 1;
    count = 0;
    memset(out, 0, sizeof(out));
    for (i = 1; i <= n; i++ ) {
        s[i] = i;
    }
    while (count < n) {
        for (i = 1; i <= n; i++) {
            if (s[i]!= -1) {
                if (s[i] % m == 0 || index % m ==0  ) {
                    out[i-1] = ++count;
                    s[i] = -1; 
                    index = 1; 
                }  else {
                    index++;
                }
            }
            
        }
    }
}
    



