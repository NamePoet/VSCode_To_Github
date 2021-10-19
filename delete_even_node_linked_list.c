#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *createlist();
struct ListNode *deleteeven( struct ListNode *head );
void printlist( struct ListNode *head )
{
     struct ListNode *p = head;
     while (p) {
           printf("%d ", p->data);
           p = p->next;
     }
     printf("\n");
}

int main()
{
    struct ListNode *head;

    head = createlist();
    head = deleteeven(head);
    printlist(head);

    return 0;
}

struct ListNode *createlist()
{
    int x;
    struct ListNode *p, *tail = NULL, *head = NULL;
    scanf("%d", &x);
    while (x != -1) {
        p = (struct ListNode*) malloc (sizeof(struct ListNode));
        p->data = x;
        if (head == NULL) {
            head = p;
        } else {
            tail->next = p;
            
        }
        tail = p;
        scanf("%d", &x);
    }

    return head;
}

struct ListNode *deleteeven( struct ListNode *head )
{
    struct ListNode *ptr1, *ptr2;
    while (head != NULL && head->data % 2 == 0)
    {
        ptr2 = head;
        head = head->next;
        free(ptr2);
    }
    if (head == NULL) 
        return NULL;
    ptr1 = head;
    ptr2 = head->next;
    while (ptr2 != NULL) {
        if (ptr2->data % 2 == 0) {
            ptr1->next = ptr2->next;
            free(ptr2);
        } else {
            ptr1 = ptr2;
            ptr2 = ptr1->next;
        }
    }
   


}