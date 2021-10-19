#include <stdio.h>
//��fscanf��fprintf����ʵ�ֽ���Ʒ��Ϣ���뵽�ļ������ļ����ݼ���Щ��Ʒ���ܼ��������ʾ����
//��ʽ���������
typedef struct Rec          //����ṹ�����ͣ�ʹ��typedef����RecΪ�ṹ��������
{
    char id[10];
    char name[20];
    float price;
    int count;
}Rec;

void WriteFile(FILE *fp, int n);
void ReadFile(FILE *fp, int n);

int main()
{
    char filename[20];
    int n;
    FILE *fp;

    printf("������Ŀ���ļ���\n");
    scanf("%s", filename);
    fp = fopen(filename, "w+");            //���ı���д��ʽ���ļ�
    if (fp == NULL)
    {
        printf("���ļ�ʧ��");
        return 0;
    }
    printf("��������Ʒ������\n");
    scanf("%d", &n);
    WriteFile(fp, n);
    ReadFile(fp, n);
    fclose(fp);

    return 0;
}

void WriteFile(FILE *fp, int n)           //�������������Ʒ��Ϣд���ļ�
{
    int i;
    Rec record;

    printf("**********��������Ʒ����**********\n");
    for (i=1; i<=n; i++) {                //�Ӽ���������Ʒ��Ϣ
        printf("��������ţ�");
        scanf("%s", record.id);
        printf("���������ƣ�");
        scanf("%s", record.name);
        printf("������۸�");
        scanf("%f", &record.price);
        printf("������������");
        scanf("%d", &record.count);
        printf("\n");
        //д���ļ�
        fprintf(fp, "%s %s %5.2f %d\n", record.id, record.name, record.price, record.count);
    }
}
void ReadFile(FILE *fp, int n)
{
    Rec record;
    double total = 0;

    rewind(fp);                         //���ļ��ڲ���λ��ָ���Ƶ��ļ���
    while (fscanf(fp, "%s %s %f %d", record.id, record.name, &record.price, &record.count) != EOF)
    {//�������
        printf("���:%s ����:%s �۸�:%5.2f ����:%d \n", record.id, record.name, record.price, record.count);
        total = total + record.price * record.count;
    }
    printf("�ϼ�:%5.2f\n", total);

}