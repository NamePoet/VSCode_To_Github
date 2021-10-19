#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *createlist(); /*裁判实现，细节不表*/
struct ListNode *reverse( struct ListNode *head );
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
    struct ListNode  *head;

    head = createlist();
    head = reverse(head);
    printlist(head);

    return 0;
}

struct ListNode *reverse( struct ListNode *head )
{
    struct ListNode *ptr1, *ptr2, *heado = NULL, *tail;
    int a[100], index = 0, i; 
    for (ptr1 = head; ptr1 != NULL; ptr1 = ptr1->next) {
        a[index++] = ptr1->data;
    }
    for (i = index-1; i>=0; i--) {
        ptr2 = (struct ListNode*)malloc(sizeof(struct ListNode));
        ptr2->data = a[i];
        ptr2->next = NULL;
        if (heado == NULL) {
            heado = ptr2;
        }else {
            tail->next = ptr2;
        }
        tail = ptr2;
    }

        return heado;

}