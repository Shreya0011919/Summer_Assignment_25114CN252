#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, j, flag;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        flag = 1;

        if(str[i] == '\n')
            continue;

        for(j = 0; str[j] != '\0'; j++)
        {
            if(i != j && str[i] == str[j])
            {
                flag = 0;
                break;
            }
        }

        if(flag)
        {
            printf("First non-repeating character = %c", str[i]);
            return 0;
        }
    }

    printf("No non-repeating character found.");

    return 0;
}
