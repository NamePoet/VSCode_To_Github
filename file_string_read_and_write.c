#include <stdio.h>
//���ʵ�ֽ�һ���ַ���׷�ӵ�ָ���ļ��У������ļ�����������Ļ�������ʹ���ַ�����д����ʵ�֣�
int main()
{
    FILE *fp;
    char str[100];
    char fileName[20];                            //�������ļ������ַ�����
 
    printf("������һ���ַ�����\n");
    gets(str);
    printf("�������ļ�����·�������ƣ�\n");
    scanf("%s", fileName);
    if ( ( fp = fopen(fileName, "a") ) == NULL ) {      //��׷�ӷ�ʽ��ָ���ļ�
        printf("��ʧ�ܣ�");
        return 0;
    } 
    fputs(str, fp);
    fclose(fp);
    if ( ( fp = fopen(fileName, "r") ) != NULL ) {     //����ļ�����
        printf("%s �ļ����ݣ�\n", fileName);
        while ( fgets(str, sizeof(str), fp) ) {        //fgets()    ���ַ�������
            printf("%s", str);
        }
        fclose(fp);
    }

    return 0;
}