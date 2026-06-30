#include <stdio.h>

int main() {
    int a, b, ch;
    float result;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    while(1) {
        printf("\n\n--- MENU ---");
        printf("\n1 Addition");
        printf("\n2 Subtraction");
        printf("\n3 Multiplication");
        printf("\n4 Division");
        printf("\n5 Exit");
        printf("\nEnter choice: ");
        scanf("%d", &ch);

        if(ch == 1) {
            result = a + b;
            printf("Result = %.2f", result);
        }
        else if(ch == 2) {
            result = a - b;
            printf("Result = %.2f", result);
        }
        else if(ch == 3) {
            result = a * b;
            printf("Result = %.2f", result);
        }
        else if(ch == 4) {
            if(b != 0)
                printf("Result = %.2f", (float)a / b);
            else
                printf("Cannot divide by zero");
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
