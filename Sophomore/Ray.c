#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n, i;
    long long j;
    scanf("%d%d", &m, &n);
    for(i = m; i <= n; ++i){
        if(i == 0){
            printf("0\n");
        }
        else{
            if(i < 0){
                i = -i;
            }
            else{}
        //num2 = num;
            j = 1;
            while(i / j != 0){
                j = j * 10;
            }
            if((i * i) % j == i){
                printf("%d\n", i);
            }
        }
    
    }
    return 0;
}
