#include <stdio.h>
#include <stdlib.h>
//���ʵ���ļ����ƣ�ʹ���ַ�����д����ʵ�֣�
/*
    �������Զ���ʽ��Դ�ļ�����д��ʽ��Ŀ���ļ���ʹ��ѭ������Դ�ļ���һ��һ�ж�ȡ���ݣ�д��Ŀ���ļ��У�
    ֱ���ļ�������

*/
int main()
{
    FILE *in, *out;                   //��������FILE���͵�ָ�����
    char infile[50], outfile[50];      //�ֱ���Դ�ļ�����Ŀ���ļ���
    char s[256];

    printf("������Դ�ļ�����");
    scanf("%s", infile);
    printf("������Ŀ���ļ�����");
    scanf("%s", outfile);
    //��֤����ȫִ�е����
    if ( ( in = fopen(infile, "r") ) == NULL)  {
        printf("���ļ�%sʧ��\n", infile);
        exit(0);       //�˳�����
    }
    if ( ( out = fopen(outfile, "w") ) == NULL ) {         //��ֻд��ʽ��ָ���ļ�
        printf("���ܽ���%s�ļ�\n", outfile);
        exit(0);
    }

    while (fgets(s, 256, in))             //��inָ����ļ������ݸ��Ƶ�out��ָ����ļ���
        fputs(s, out);
    printf("�ļ��������\n");
    fclose(in);
    fclose(out);


    return 0;
}