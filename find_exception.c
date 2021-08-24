#include <stdio.h>

void ChaChong( int p, int c[] );
int main() 
{
    int i, j, m, n, t, s, flag, flag2;
    int a[30], b[30];
    flag = flag2 = 0;
    scanf("%d", &m);
    for (i=0; i<m; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &n);
    for (i=0; i<n; i++) {
        scanf("%d", &b[i]);
    }
    
    ChaChong( m, a );
    // for (i=0; i<m-1; i++) {
    //     for (j=i+1; j<m; j++ ) {
    //         if (a[i] == a[j]) {
    //             a[j] = -1;
    //         }
    //     }
    // }
    ChaChong( n, b );
    // for (i=0; i<n-1; i++) {
    //     for (j=i+1; j<n; j++ ) {
    //         if (b[i] == b[j]) {
    //             b[j] = -1;
    //         }
    //     }
    // }

    for (i=0; i<m; i++) {
        for (j=0; j<n; j++) {
            if (a[i] == b[j]) {
                b[j] = -1;
                flag = 1;
            }
        }
        if (flag == 1) {
            a[i] = -1;     
        }
        flag = 0;
        
    }

    for (i=0; i<m; i++) {
        if (a[i] != -1) {
            printf("%d", a[i]); 
            flag2 = 1;
            t = i;
            break;
        }
    }

    for (i=t+1; i<m; i++) {
        if (a[i] != -1 ) {
            {
                if ( flag2 == 1) {
                    printf(" %d", a[i]);
                }
                else {
                    printf("%d", a[i]);
                    flag2 = 1;
                }
            }
            
        }
    }
    for (i=0; i<n; i++) {
        if ( b[i] != -1 ) 
            {
                if ( flag2 == 1) {
                    printf(" %d", b[i]);
                }
                else {
                    printf("%d", b[i]);
                    flag2 = 1;
                }
           
            } 
    }

    return 0;
}

void ChaChong( int p, int c[] ) 
{
    int i, j;
    for (i=0; i<p-1; i++) {
        for (j=i+1; j<p; j++ ) {
            if (c[i] == c[j]) {
                c[j] = -1;
            }
        }
    }
}