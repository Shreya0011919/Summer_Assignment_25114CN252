#include <stdio.h>

int main()
{
    char str[100];
    int i, j = 0;
    char newStr[100];

    printf("Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] != ' ')
        {
            newStr[j] = str[i];
            j++;
        }
    }

    newStr[j] = '\0';

    printf("String without spaces: %s", newStr);

    return 0;
}
