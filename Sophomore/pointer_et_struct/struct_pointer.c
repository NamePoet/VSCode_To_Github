#include <stdio.h>
struct student {
    int num;
    char s[20];
    int Chinese;
    int Math;
    int English;
};

int main()
{
    struct student *p, s1 = {1001, "ZhangLi", 78, 87, 85};
    p = &s1;
    printf("s1:%d %s %d %d %d\n", s1.num, s1.s, s1.Chinese, s1.Math, s1.English);
    printf("s1:%d %s %d %d %d\n", p->num, p->s, p->Chinese, p->Math, p->English);

    return 0;
}