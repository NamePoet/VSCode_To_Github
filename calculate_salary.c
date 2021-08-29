#include <stdio.h>
#include <stdlib.h>
struct employee{
    char name[20];
    int basic_wage;
    int floating_wage;
    int expense;
    double income;
};

int main()
{
    int n, i;
    struct employee *p;
    scanf("%d", &n);

    p = (struct employee*) malloc ( n * sizeof(struct employee) );
    if (p == NULL) {
        exit(1);
    }

    for (i=0; i<n; i++) {
        scanf("%s%d%d%d", p[i].name, &p[i].basic_wage, &p[i].floating_wage, &p[i].expense);
    }

    for (i=0; i<n; i++) {
        p[i].income = p[i].basic_wage + p[i].floating_wage - p[i].expense;
        printf("%s %.2f\n", p[i].name, p[i].income);
        if (i < n-1) {
            printf("\n");
        }
    }
}