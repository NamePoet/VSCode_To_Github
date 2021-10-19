#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *createlist(); /*裁判实现，细节不表*/
struct ListNode *mergelists(struct ListNode *list1, struct ListNode *list2);
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
    struct ListNode  *list1, *list2;

    list1 = createlist();
    list2 = createlist();
    list1 = mergelists(list1, list2);
    printlist(list1);

    return 0;
}

struct ListNode *mergelists(struct ListNode *list1, struct ListNode *list2)
{
    struct ListNode *head = NULL, *tail = NULL, *p1 = NULL, *p2 = NULL;
    int i, j;
    int a[100], index = 0, temp;
    for (p1 = list1; p1 != NULL; p1 = p1->next)
        a[index++] = p1->data;
    for (p1 = list2; p1 != NULL; p1 = p1->next)
        a[index++] = p1->data;

    for (i=0; i<index; i++)        //排序
        for (j=i; j<index; j++) 
            if (a[i] > a[j]) 
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        

    for (i=0; i<index; i++)
    {
        p2 = (struct ListNode*)malloc(sizeof(struct ListNode));
        p2->data = a[i];
        p2->next = NULL;
        if (head == NULL) {
            head = p2;
        }
        else {
            tail->next = p2;
        }
        tail = p2;  //建立链表时，新创立的结点永远成为尾结点
    }

    return head;

}