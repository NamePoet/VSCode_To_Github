#include <stdio.h>
int main() 
{
    char a,A;
    a = 'a';
    A = 'A';
    printf("%c\n", A+'a'-'A');  //��дתСд
    printf("%c\n", a+'A'-'a');  //Сдת��д
    printf("%d\n",'A'-'a');   //���μ�ľ���
    return 0;
}