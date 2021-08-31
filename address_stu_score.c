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
            tail->next = ptr;       //尾节点的后继指针指向临时节点, 起到连接作用
        }
        tail = ptr;                 //临时节点成为了尾节点——尾插法
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
       //要被删除的是表头结点
   } 
   if (head == NULL)   //空链表
        return NULL;  
    /*要被删除的是非表头结点*/
    q = head;
    p = head->next;//从表头的下一个结点搜索所有符合删除要求的结点
    while (p != NULL) 
    {
        if (p->score < min_score){//p所指结点符合删除要求
            q->next = p->next;
            free(p);
        }
        else 
            q = p;   //q后移到p的位置
            p = q->next;  //p指向q的后一个结点
    }
    return head;

}