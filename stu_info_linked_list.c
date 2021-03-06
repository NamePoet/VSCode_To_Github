#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stud_node {
     int    num;
     char   name[20];
     int    score;
     struct stud_node *next;
};
struct stud_node *head, *tail;

void input();

int main()
{
    struct stud_node *p;

    head = tail = NULL;
    input();
    for ( p = head; p != NULL; p = p->next )
        printf("%d %s %d\n", p->num, p->name, p->score);

    return 0;
}

void input()
{
    struct stud_node* q;
    q = (struct stud_node*)malloc(sizeof(struct stud_node));
    scanf("%d", &q->num);
    while (q->num != 0) {
        scanf("%s %d", q->name, &q->score);
        if (head == NULL)
            head = q;
        if (tail != NULL) 
            tail->next = q;
        tail = q;
        tail->next = NULL;
        q = (struct stud_node*)malloc(sizeof(struct stud_node));
        scanf("%d", &q->num);

    }
}
