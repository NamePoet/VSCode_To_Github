#include <stdio.h>
void Input_Array(int *a);
void Sort_Array(int *a);
void Output_Array(int *a);

int main()
{
    int a[100];
    Input_Array(a);
    Sort_Array(a);
    Output_Array(a);

}
void Input_Array(int *a)
{
    int i;
    for (i=0; i<10; i++) {
        scanf("%d", (a+i) );
    }
}

void Sort_Array(int *a)
{
    int i, j, t;
    for (i=1; i<10; i++) {    // 第一重循环代表第i次冒泡
        for (j=0; j<=10-i-1; j++) {    //每一次会把最沉的泡泡放在最底下。其余泡泡浮上来
            if (*(a+j) > *(a+j+1) ) {
                t = *(a+j);
                *(a+j) = *(a+j+1);
                *(a+j+1) = t;
            }
        }
    }

}

void Output_Array(int *a)
{
    int i;
    for (i=0; i<10; i++) {
        printf("%d ", *(a+i) );
    }

}