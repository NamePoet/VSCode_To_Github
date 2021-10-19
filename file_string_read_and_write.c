#include <stdio.h>
//编程实现将一个字符串追加到指定文件中，并将文件的内容在屏幕上输出（使用字符串读写函数实现）
int main()
{
    FILE *fp;
    char str[100];
    char fileName[20];                            //定义存放文件名的字符数组
 
    printf("请输入一个字符串：\n");
    gets(str);
    printf("请输入文件所在路径及名称：\n");
    scanf("%s", fileName);
    if ( ( fp = fopen(fileName, "a") ) == NULL ) {      //以追加方式打开指定文件
        printf("打开失败！");
        return 0;
    } 
    fputs(str, fp);
    fclose(fp);
    if ( ( fp = fopen(fileName, "r") ) != NULL ) {     //如果文件存在
        printf("%s 文件内容：\n", fileName);
        while ( fgets(str, sizeof(str), fp) ) {        //fgets()    读字符串函数
            printf("%s", str);
        }
        fclose(fp);
    }

    return 0;
}