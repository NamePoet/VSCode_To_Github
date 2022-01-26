#include <stdio.h>
struct s1{
    int number;
    char name[20];
    int Chinese;
    int Maths;
    int English;
};
void OutputInformation(int Number, char Name[], int Chinese, int Maths, int English);
int main()
{
    int i, n;
    struct s1 stu[5];
    printf("Input n:");
    scanf("%d", &n);
    printf("Input the student's number,name and course scores\n");
    for (i=1; i<=n; i++) {
        printf("No.%d:", i);
        scanf("%d %s %d %d %d", &stu[i].number, stu[i].name, &stu[i].Chinese, &stu[i].Maths, &stu[i].English);
        OutputInformation(stu[i].number, stu[i].name, stu[i].Chinese, stu[i].Maths, stu[i].English);
    }    
    
    return 0;
}


void OutputInformation(int Number, char Name[], int Chinese, int Maths, int English)
{
    double sum, ave;
    sum = ave = 0;
    sum = sum + Chinese + Maths + English;
    ave = sum / 3;
    printf("num:%d,name:%s,average:%.2f\n", Number, Name, ave);

}