#include <stdio.h>
#include <stdlib.h>
//���ﴴ��һ���б�������ʾ���������
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *head, *p, *q, *t;
    int i, n, a;
    scanf("%d", &n);
    head = NULL; //ͷָ���ʼΪ��
    for (i=1; i<=n; i++) { //ѭ������n����
        scanf("%d", &a);
        //��̬����һ���ռ䣬 �������һ����㣬������ʱָ��pָ������ڵ�
        p = (struct node*)malloc(sizeof(struct node));
        p->data = a; //�����ݴ洢����ǰ����data����
        p->next = NULL; //���õ�ǰ���ĺ��ָ��ָ��գ�Ҳ���ǵ�ǰ������һ�����Ϊ��
        if (head == NULL) {
            head = p; //������ǵ�һ�������Ľ�㣬��ͷָ��ָ��������
        } else {
            q->next = p; //������ǵ�һ�������Ľ�㣬����һ�����ĺ��ָ��ָ��ǰ���
        }
        q = p; //ָ��qҲָ��ǰ���
    }


    //���������������
    t = head; 
    while(t != NULL) {
        printf("%d ", t->data);
        t = t->next;//������һ�����
    }

    getchar(); getchar();



    return 0;
}