#include <stdio.h>
#include <math.h>
int isPrime(int n);
int main()
{
	int n,i,p,q;
	scanf("%d",&n);
	for(i = 2;i <= n/2;i++){
		if(isPrime(i)&&isPrime(n-i)){
		printf("%d = %d + %d",n,i,n-i);
		break;
	    }
	}
	
	return 0;
}
int isPrime(int n)    
{
	int div;
	for(div = 2;div <= sqrt(n);div++){   
		if(n%div == 0)
		return 0;
	}
	return 1;
}

