#include <stdio.h>
//��ָ���ļ��ж�ȡ���ݣ�������Ļ�����

/*
    �ļ�����������
    1.��
    2.ִ�С���������д�������ߡ���д������
    3.�ر��ļ�

*/
int main()
{
    FILE *fp;
    char inputfile[50];     //�ļ�·��  �ļ���
    char ch;

    printf("������Ҫ���ļ������֣�");
    scanf("%s", inputfile);
    fp = fopen(inputfile, "r");
    if (fp == NULL) {
        printf("\n%s��ʧ�ܣ�\n", inputfile);
        return 0;
    }
    printf("%s �ļ����ݣ�\n", inputfile);
    while ( (ch = fgetc(fp)) != EOF ) 
        putchar(ch);
    printf("\n");


    fclose(fp);
    return 0;
}