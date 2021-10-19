#include <stdio.h>
//从指定文件中读取数据，并在屏幕上输出

/*
    文件基本操作：
    1.打开
    2.执行“读”、“写”、或者“读写”操作
    3.关闭文件

*/
int main()
{
    FILE *fp;
    char inputfile[50];     //文件路径  文件名
    char ch;

    printf("请输入要打开文件的名字：");
    scanf("%s", inputfile);
    fp = fopen(inputfile, "r");
    if (fp == NULL) {
        printf("\n%s打开失败！\n", inputfile);
        return 0;
    }
    printf("%s 文件内容：\n", inputfile);
    while ( (ch = fgetc(fp)) != EOF ) 
        putchar(ch);
    printf("\n");


    fclose(fp);
    return 0;
}