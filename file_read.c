#include <stdio.h>
//���ʵ����ֻ����ʽ���ɼ��������ļ�������������Ƿ�ɹ�
int main()
{
    FILE *fp;
    char inputfile[50];
    printf("�������ļ�����\n");
    gets(inputfile);

    fp = fopen(inputfile, "r");
    if (fp == NULL) {
        printf("%s ��ʧ��!\n", inputfile);
    } else {
        printf("%s �򿪳ɹ�!\n", inputfile);
    }

    fclose(fp);  //�ر�fp��ָ����ļ�

    return 0;
}