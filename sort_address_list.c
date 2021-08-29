#include <stdio.h>
#include <string.h>
int main()
{
    struct info{
        char name[15];
        int  birth;
        char phone[30]; 
    }s[10], young;
    int i, j, n;
    scanf("%d", &n);
    //getchar();
    for (i=0; i<n; i++) {
        scanf("%s %d ", s[i].name, &s[i].birth);
        gets(s[i].phone);
    }


    for (i=0; i<n-1; i++) {
        for (j=i; j<n; j++) {
            if (s[i].birth > s[j].birth) {
                young = s[i];
                s[i] = s[j];
                s[j] = young;
            }
        }
    }
    for (i=0; i<n; i++) {
        printf("%s %d %s", s[i].name, s[i].birth, s[i].phone);
        if (i < n-1) 
            printf("\n");
    }

    return 0;
}