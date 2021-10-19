#include <stdio.h>
//编程实现以只读方式打开由键盘输入文件名，并输出打开是否成功
int main()
{
    FILE *fp;
    char inputfile[50];
    printf("请输入文件名：\n");
    gets(inputfile);

    fp = fopen(inputfile, "r");
    if (fp == NULL) {
        printf("%s 打开失败!\n", inputfile);
    } else {
        printf("%s 打开成功!\n", inputfile);
    }

    fclose(fp);  //关闭fp所指向的文件

    return 0;
}