#include <stdio.h>
#include <stdlib.h>

struct stud_node {
     int    num;
     char   name[20];
     int    score;
     struct stud_node *next;
};

struct stud_node *createlist();
struct stud_node *deletelist( struct stud_node *head, int min_score );

int main()
{
    int min_score;
    struct stud_node *p, *head = NULL;

    head = createlist();
    scanf("%d", &min_score);
    head = deletelist(head, min_score);
    for ( p = head; p != NULL; p = p->next )
        printf("%d %s %d\n", p->num, p->name, p->score);

    return 0;
}

struct stud_node *createlist()
{
    int n;
    struct stud_node *ptr, *head = NULL, *tail = NULL;
    scanf("%d", &n);
    while (n != 0) {
        ptr = (struct stud_node*)malloc(sizeof(struct stud_node));
        ptr->num = n;
        scanf("%s %d", ptr->name, &ptr->score);
    
        if (head == NULL) {
            head = ptr;
        }
        else {
            tail->next = ptr;       //β�ڵ�ĺ��ָ��ָ����ʱ�ڵ�, ����������
        }
        tail = ptr;                 //��ʱ�ڵ��Ϊ��β�ڵ㡪��β�巨
        scanf("%d", &n);
       
    }

    return head;
    
}
struct stud_node *deletelist( struct stud_node *head, int min_score )
{
   struct stud_node *q, *p;
   while (head != NULL && head->score < min_score) {
       p = head;
       head = head->next;
       free(p);
       //Ҫ��ɾ�����Ǳ�ͷ���
   } 
   if (head == NULL)   //������
        return NULL;  
    /*Ҫ��ɾ�����ǷǱ�ͷ���*/
    q = head;
    p = head->next;//�ӱ�ͷ����һ������������з���ɾ��Ҫ��Ľ��
    while (p != NULL) 
    {
        if (p->score < min_score){//p��ָ������ɾ��Ҫ��
            q->next = p->next;
            free(p);
        }
        else 
            q = p;   //q���Ƶ�p��λ��
            p = q->next;  //pָ��q�ĺ�һ�����
    }
    return head;

}