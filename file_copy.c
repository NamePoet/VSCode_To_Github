#include <stdio.h>
#include <stdlib.h>
//编程实现文件复制（使用字符串读写函数实现）
/*
    分析：以读方式打开源文件，以写方式打开目标文件；使用循环，从源文件中一行一行读取数据，写到目标文件中，
    直到文件结束。

*/
int main()
{
    FILE *in, *out;                   //定义两个FILE类型的指针变量
    char infile[50], outfile[50];      //分别存放源文件名和目标文件名
    char s[256];

    printf("请输入源文件名：");
    scanf("%s", infile);
    printf("请输入目标文件名：");
    scanf("%s", outfile);
    //保证程序安全执行的语句
    if ( ( in = fopen(infile, "r") ) == NULL)  {
        printf("打开文件%s失败\n", infile);
        exit(0);       //退出程序
    }
    if ( ( out = fopen(outfile, "w") ) == NULL ) {         //以只写方式打开指定文件
        printf("不能建立%s文件\n", outfile);
        exit(0);
    }

    while (fgets(s, 256, in))             //将in指向的文件的内容复制到out所指向的文件中
        fputs(s, out);
    printf("文件复制完成\n");
    fclose(in);
    fclose(out);


    return 0;
}