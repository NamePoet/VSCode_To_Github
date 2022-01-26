#include <stdio.h>
struct stu{
    int number;
    char s[50];
};
void Output(struct stu STU);
int main()
{
    int i;
    struct stu Stu[3] = { {1001, "ZhangLi"}, {1002, "WangWu"}, {1003, "LiYan"} };
    for (i=0; i<3; i++) {
        Output(Stu[i]);
    }
        
    return 0;
}

void Output(struct stu STU)
{
    printf("The number %d student's score name is %s\n", STU.number, STU.s);
}