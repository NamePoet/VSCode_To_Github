#include <stdio.h>
int main()
{
    struct student{
        char stu_num[10];
        char name[12];
        int cj1;
        int cj2;
        int cj3;
        int total;
    }s[12], top;

    int n , i;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%s %s %d %d %d", s[i].stu_num, s[i].name, &s[i].cj1, &s[i].cj2, &s[i].cj3);
        s[i].total = s[i].cj1 + s[i].cj2 + s[i].cj3;
    }
    top = s[0];
    for (i=1; i<n; i++) {
        if (s[i].total > top.total)
            top = s[i];
    }

    printf("%s %s %d", top.name, top.stu_num, top.total);



    return 0;
}