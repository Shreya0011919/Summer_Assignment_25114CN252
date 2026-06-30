#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50];
    int ch;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    while(1) {
        printf("\n\n--- MENU ---");
        printf("\n1 Length of string");
        printf("\n2 Copy string");
        printf("\n3 Concatenate string");
        printf("\n4 Compare strings");
        printf("\n5 Exit");
        printf("\nEnter choice: ");
        scanf("%d", &ch);

        if(ch == 1) {
            printf("Length of str1 = %lu", strlen(str1));
            printf("\nLength of str2 = %lu", strlen(str2));
        }

        else if(ch == 2) {
            strcpy(str1, str2);
            printf("After copy str1 = %s", str1);
        }

        else if(ch == 3) {
            strcat(str1, str2);
            printf("After concat = %s", str1);
        }

        else if(ch == 4) {
            if(strcmp(str1, str2) == 0)
                printf("Strings are equal");
            else
                printf("Strings are not equal");
        }

        else if(ch == 5) {
            break;
        }

        else {
            printf("Invalid choice");
        }
    }

    return 0;
}
