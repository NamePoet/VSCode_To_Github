#include <stdio.h>
#include <string.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    char s[100], max[100];
    getchar();
    gets(s);
    strcpy(max, s);
    for (i=0; i<n-1; i++) {                //�ַ������ַ����鶼�Ǵ�0�±꿪ʼ
        gets(s);
        if (strlen(s) >  strlen(max) ) {
            strcpy(max, s);
        } 
    }
    
    printf("The longest is: ");
    puts(max);

    return 0;
}