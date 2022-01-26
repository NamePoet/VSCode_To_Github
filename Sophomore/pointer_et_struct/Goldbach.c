#include<stdio.h>
#include<math.h>
void Goldbach(int a, int b );   
int main()
{ int  n,m;
  printf("请输入两个两个正整数（n<m）：");
  scanf("%d%d",&n,&m);            
  if(n<m)  Goldbach(n,m);
  else        Goldbach(m,n);
  return 0;
}
int prime(int n)  //判断是否是素数函数
{    int i,m=sqrt(n);
     for(i=2;i<=m;i++)
          if(n%i==0)  return 0;
     return 1;
}
void Goldbach(int a,int b)
{   int i,k;
     for(i=a;i<=b;i++)
       {   k=3;
            while(k<=i/2)
	{  if(prime(k)*prime(i-k)) break; 
                             k=k+2;
	}
          if(k<=i/2)printf("%4d=%4d+%4d\n",i,k,i-k);
        }
}