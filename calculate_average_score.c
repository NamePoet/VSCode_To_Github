#include <stdio.h>
struct student {
    char name[20];   //姓名
    char stu_num[5]; //学号
    double score;       //分数
}s[10];

int main()
{
    int i, n;
    double sum, ave;
    sum = 0;
    scanf("%d", &n);
    for (i=0; i<n; i++) {
        scanf("%s %s %lf", s[i].stu_num, s[i].name, &s[i].score);
        sum += s[i].score;  
    }
    ave = sum / n;
    printf("%.2f\n", ave);
    for (i=0; i<n; i++) {
        if (s[i].score < ave) {
            printf("%s %s\n" , s[i].name, s[i].stu_num);
           
        }
    }

    return 0;
}