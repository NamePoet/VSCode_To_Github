#include <stdio.h>
void pointer_find_max_and_min(int a, int b, int *pmax, int *pmin);
int main()
{
    int max, min, a, b;   
    scanf("%d %d", &a, &b);
    pointer_find_max_and_min(a, b, &max, &min);        //��ָ������൱�ڻ�����һ����ֵ��������Ϊֱ�Ӱ�ֵд���˵�ַ
    printf("max=%d min=%d", max, min);

    return 0;
}

void pointer_find_max_and_min(int a, int b, int *pmax, int *pmin)      //ָ����������һ����ַ��ֵ
{

    if (a > b) {
        *pmax = a;
        *pmin = b;
    } else {
        *pmax = b;
        *pmin = a;
    }

} 