#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *readlist();
struct ListNode *getodd( struct ListNode **L );
void printlist( struct ListNode *L )
{
     struct ListNode *p = L;
     while (p) {
           printf("%d ", p->data);
           p = p->next;
     }
     printf("\n");
}

int main()
{
    struct ListNode *L, *Odd;
    L = readlist();
    Odd = getodd(&L);
    printlist(Odd);
    printlist(L);

    return 0;
}

struct ListNode *readlist()
{
    struct ListNode *p, *head = NULL, *tail = NULL;
    int n;
    scanf("%d", &n);
    while (n != -1) {
        p = (struct ListNode*)malloc(sizeof(struct ListNode));
        p->data = n;
        p->next = NULL;
        if (head == NULL) {
            head = p;
        }else {
            tail->next = p;
        }
        tail = p;
        scanf("%d", &n);
    }
    return head;

}

struct ListNode *getodd( struct ListNode **L )
{
    struct ListNode *p , *head1 = NULL, *tail1 = NULL, *head2 = NULL, *tail2 = NULL;
    while (*L != NULL) {
        if  ( (*L)->data % 2 !=0 )  {   //形成一张奇数构成的链表
            p = (struct ListNode*)malloc(sizeof(struct ListNode));
            p->data = (*L)->data;
            p->next = NULL;
            if (head1 == NULL) {
                head1 = p;
            } else {
                tail1->next = p;
            }
            tail1 = p;
        } else{                    //形成一张偶数构成的链表
            p = (struct ListNode*)malloc(sizeof(struct ListNode));
            p->data = (*L)->data;
            p->next = NULL;
            if (head2 == NULL) {
                head2 = p;
            } else {
                tail2->next = p;
            }
            tail2 = p;
        }

        *L = (*L)->next;
    }    
        
        *L = head2;
        return head1;
    
}