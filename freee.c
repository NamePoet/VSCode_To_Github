#include <stdio.h>
int main()
{
	int p, m, n;
	float x=3.14,y= x;
	p = sizeof(int);
	m = sizeof(long);
	n = sizeof(short);
	
	printf("%d %d %d", p, m, n);
	
	return 0;
}