#include <stdio.h>
int main()
{
    FILE *fp1, *fp2;
    int a, b;
    b = 5120;
    fp1 = fopen("d:\\0215.txt", "r");
    fp2 = fopen("d:\\0914.txt","w");
    if (fp1 == NULL || fp2 == NULL) {
        printf("file open error!");
    } else {
        fscanf(fp1,"%d", &a);
        printf("%d",a);
        fprintf(fp2, "%d", b);
    }

    fclose(fp1);
    fclose(fp2);



    return 0;
}