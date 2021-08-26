#include <stdio.h>
void Print(int n, char a[10][10]);
int main()
{
    int i, j, k, n, x, count, fail;
    int x1, y1, x2, y2;
    char a[10][10];
    scanf("%d", &n);
    count = fail = 0;
    for (i=1; i<=2*n; i++) {
        for (j=1; j<=2*n; j++) {
            scanf("%c", &a[i][j]);
            if (a[i][j]==' ' || a[i][j]=='\n')  j--;
        }
    }
    scanf("%d", &x);
    for (k=1; k<=x; k++) {
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
            if ( a[x1][y1] == a[x2][y2] && a[x1][y1] != '*') {        
                a[x1][y1] = a[x2][y2] = '*';
                count += 2;        // 很细，用来否定掉全*输出
                if (count != 2*n *2*n) {
                   Print(n, a); 
                }
                
            } else if ( (a[x1][y1] != a[x2][y2] ) || (a[x1][y1] == '*' && a[x2][y2] == '*') ){                                           
                fail++;
                printf("Uh-oh\n");
            }    
                
                if (count == 2*n *2*n) {
                    printf("Congratulations!");
                    break;
                }
                if (fail == 3)
                {
                    printf("Game Over");
                    break;
                }
    }

    return 0;
}

void Print( int n, char a[10][10] )
{
    int i,j;
    for (i=1; i<=2*n; i++) {
        for (j=1; j<=2*n; j++) {
            if (j==1) {
                printf("%c", a[i][1]);    
            }else {
                printf(" %c", a[i][j]);   
            }
        }
    printf("\n");    
    }
    
}