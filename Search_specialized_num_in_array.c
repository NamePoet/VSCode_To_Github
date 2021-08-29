#include <stdio.h>
#define MAXN 10

int search( int list[], int n, int x );

int main()
{
    int i, index, n, x;
    int a[MAXN];

    scanf("%d", &n);
    for( i = 0; i < n; i++ )
        scanf("%d", &a[i]);
    scanf("%d", &x);
    index = search( a, n, x );
    if( index != -1 )
        printf("index = %d\n", index);
    else
        printf("Not found\n");

    return 0;
}

int search( int list[], int n, int x )
{
    int i, loc_min;
    for (i=0; i<n; i++) {
        if (list[i] == x) {
            loc_min = i;
            return loc_min;
        }
    }
    return -1;

}