#include <stdio.h>
void WriteFile(FILE *fp);
void ReadFile(FILE *fp);
/*
    从键盘输入字符，并将其写入一个文本文件，直到遇到“#”结束输入，然后再从该文件读取文件内容，
    并在屏幕上输出
*/
int main()
{
    FILE *fp;
    char inputfile[30];

    printf("请输入文件名：");
    scanf("%s", inputfile);
    fp = fopen(inputfile, "w+");
    if (fp == NULL) {
        printf("打开文件失败");
        return 0;
    } else {
        printf("%s 打开成功\n", inputfile);
        WriteFile(fp);        //调用函数把字符写入文件
        ReadFile(fp);         //调用函数读文件内容并显示
        fclose(fp);           //关闭文件
    }

    return 0;
}

void WriteFile(FILE *fp)
{
    char ch;

    printf("请输入文件内容，以#结束！\n");
    while ( (ch = getchar() ) != '#' ) {
        fputc(ch, fp);
    }
    rewind(fp);               //将文件指针定位与文件开头

}
void ReadFile(FILE *fp)
{
    char ch;
    printf("读取文件内容：\n");
    ch = fgetc(fp);
    while (ch != EOF) {
        putchar(ch);          //显示字符
        ch = fgetc(fp);  
    }
    printf("\n文件读取结束");


}