#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
	int i, j, k, t, T, m, n, flag1, flag2, x[20], y[20], count;
	scanf("%d %d", &m, &n);
    if (m == 0) {
        printf("%d\n", 0);
    }
	flag1 = 0;  //表示没有找到同构数 
	for (i=m; i<=n; i++) {
		flag2 = 0;
		t = i;
        j = 0;
        memset(x, 0, sizeof(x));
        count = 0;
		while (t>0) {
			x[j] = t % 10;
            count++;
			t /= 10;
			j++;
		} t = i;
		
        T = t*t;
        j = 0;
        memset(y, 0, sizeof(y));
		while (T> 0) {
			y[j] = T % 10;
			T /= 10;
			j++;
		}
		for (k=0; k<count; k++) {
			if (x[k]!=y[k]) {
				flag2 = 1;
				break;
			}
		} if (!flag2 && i!=0) {
			flag1 = 1;
			printf("%d\n", i);
		}
		
	}
		
	
	if (!flag1) {
		printf("No Answer\n");
	}
	
	return 0;
}
