#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *readlist();
struct ListNode *deletem( struct ListNode *L, int m );
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
    int m;
    struct ListNode *L = readlist();
    scanf("%d", &m);
    L = deletem(L, m);
    printlist(L);

    return 0;
}

struct ListNode *readlist()
{
    int n;
    struct ListNode *p, *head = NULL, *tail = NULL;
    scanf("%d", &n);
    while ( n != -1){
        p = (struct ListNode*)malloc(sizeof(struct ListNode));
        p->data = n;
        p->next = NULL;
        if (head == NULL) {
            head = p;
        } else {
            tail->next = p;
        }
        tail = p;
        scanf("%d", &n);
    }

    return head;
}

struct ListNode *deletem( struct ListNode *L, int m )
{
    struct ListNode *ptr1, *ptr2, *head = L;
    //分情况讨论

    // 情况1
    while (head != NULL && head->data == m) {
        ptr2 = head;
        head = head->next;
        free(ptr2);
    }

    // 情况2
    if (head == NULL) {
        return NULL;
    }
    // 情况3
    ptr1 = head;
    ptr2 = head->next;
    while (ptr2 != NULL) {
        if (ptr2->data == m) {
           ptr1->next = ptr2->next;
           free(ptr2);
        } else {
            ptr1 = ptr2;
        }
        ptr2 = ptr1->next;
    }

    return head;


}