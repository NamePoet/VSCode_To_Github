#include <stdio.h>
#include <string.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    char s[100], min[100];
    getchar();
    gets(s);
    strcpy(min, s);
    for (i=0; i<n-1; i++) {                //�ַ������ַ����鶼�Ǵ�0�±꿪ʼ
        gets(s);
        if (strcmp(s, min) < 0) {
            strcpy(min, s);
        }
    }
    
    printf("Min is: ");
    puts(min);

    return 0;
}