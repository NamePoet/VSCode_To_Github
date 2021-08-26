//sizeof()的常用类型的内存空间
#include <stdio.h>
int main() 
{
    int n;
    int *p;
   
     n = sizeof(int);    // 4
     n = sizeof(double);  // 8
     n = sizeof(p);    // 8
     n = sizeof(char);   // 1
     n = sizeof(float);     // 4
     n = sizeof(unsigned int);   //4
    
    int arr[] = {1,2,3};     //12

    printf("%d", sizeof(arr));
    return 0;
}