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
    struct stud_node *p, *head = NULL,  *tail = NULL;
    scanf("%d", &n);
    while (n!=0) {
        p = (struct stud_node*)malloc(sizeof(struct stud_node));
        p->num = n;
        scanf("%s %d", p->name, &p->score);
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

struct stud_node *deletelist( struct stud_node *head, int min_score )
{
    struct stud_node *p1, *p2, *tail2 = NULL;
    while (head!= NULL && head->score<80) {
            p1 = head;
            head = head->next;
            free(p1);
        }

    
        if (head == NULL) {
            return NULL;
        } 
    p1 = head;
    p2 = head ->next;
    while (p2 != NULL) {
        if (p2->score < 80) {
            p1->next = p2->next;
            free(p2);
            
        }
        p1 = p2;
        p2 = p1->next;
    }

    return head;
}