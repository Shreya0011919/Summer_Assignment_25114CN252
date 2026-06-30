#include <stdio.h>
#include <string.h>

int main()
{
    char word[5][50], temp[50];
    int i, j;

    printf("Enter 5 words:\n");

    for(i = 0; i < 5; i++)
        gets(word[i]);

    for(i = 0; i < 4; i++)
    {
        for(j = i + 1; j < 5; j++)
        {
            if(strlen(word[i]) > strlen(word[j]))
            {
                strcpy(temp, word[i]);
                strcpy(word[i], word[j]);
                strcpy(word[j], temp);
            }
        }
    }

    printf("Words sorted by length:\n");

    for(i = 0; i < 5; i++)
        printf("%s\n", word[i]);

    return 0;
}
