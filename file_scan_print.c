#include <stdio.h>
void WriteFile(FILE *fp);
void ReadFile(FILE *fp);
/*
    �Ӽ��������ַ���������д��һ���ı��ļ���ֱ��������#���������룬Ȼ���ٴӸ��ļ���ȡ�ļ����ݣ�
    ������Ļ�����
*/
int main()
{
    FILE *fp;
    char inputfile[30];

    printf("�������ļ�����");
    scanf("%s", inputfile);
    fp = fopen(inputfile, "w+");
    if (fp == NULL) {
        printf("���ļ�ʧ��");
        return 0;
    } else {
        printf("%s �򿪳ɹ�\n", inputfile);
        WriteFile(fp);        //���ú������ַ�д���ļ�
        ReadFile(fp);         //���ú������ļ����ݲ���ʾ
        fclose(fp);           //�ر��ļ�
    }

    return 0;
}

void WriteFile(FILE *fp)
{
    char ch;

    printf("�������ļ����ݣ���#������\n");
    while ( (ch = getchar() ) != '#' ) {
        fputc(ch, fp);
    }
    rewind(fp);               //���ļ�ָ�붨λ���ļ���ͷ

}
void ReadFile(FILE *fp)
{
    char ch;
    printf("��ȡ�ļ����ݣ�\n");
    ch = fgetc(fp);
    while (ch != EOF) {
        putchar(ch);          //��ʾ�ַ�
        ch = fgetc(fp);  
    }
    printf("\n�ļ���ȡ����");


}