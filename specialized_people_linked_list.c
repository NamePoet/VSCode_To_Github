#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ListNode {
    char code[8];
    struct ListNode *next;
};

struct ListNode *createlist(); /*����ʵ�֣�ϸ�ڲ���*/
int countcs( struct ListNode *head );

int main()
{
    struct ListNode  *head;

    head = createlist();
    printf("%d\n", countcs(head));

    return 0;
}

int countcs( struct ListNode *head )
{
    int count = 0;
    struct ListNode *p;
    for (p=head; p!= NULL; p=p->next) {
        if (p->code[1] == '0' && p->code[2] == '2') {
            count++;
        }
    }


    return count;
    
}