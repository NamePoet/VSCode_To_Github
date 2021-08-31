#include <stdio.h>
#include <string.h>
int main()
{
    char word[20][10];
    char temp[10];
    int index = 0;
    gets(word[index]);
    int i, j ;
    while ((word[index][0]) != '#')
    {
        index++;
        gets(word[index]);
    }
    for ( i = 0; i < index; i++)
        for ( j = i; j < index; j++)
        {
            if (strlen(word[i]) > strlen(word[j]))
            {
                strcpy(temp, word[i]);
                strcpy(word[i], word[j]);
                strcpy(word[j], temp);
            }
        }
    for ( i = 0; i < index; i++)
        printf("%s ", word[i]);

    return 0;
}
