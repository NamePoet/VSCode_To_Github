#include <stdio.h>
int main()
{
	int h, m, s;
	scanf("%d:%d:%d", &h,&m,&s);
	if (s+1 == 60) {
		s = 0;
		m += 1;
		if (m == 60) {
			m = 0;
			h += 1;
			if (h == 24) {
				h == 0;
			}
		}
	} else {
		s += 1;
	}
	
	printf("%02d:%02d:%02d",h,m,s);
	return 0;
}