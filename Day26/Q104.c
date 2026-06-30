#include <stdio.h>

int main()
{
    int ans, score = 0;

    printf("Simple Quiz Application\n\n");

    printf("Q1. What is the capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n");
    printf("Enter your answer: ");
    scanf("%d", &ans);

    if(ans == 2)
        score++;

    printf("\nQ2. C language was developed by?\n");
    printf("1. Dennis Ritchie\n2. James Gosling\n3. Bjarne Stroustrup\n4. Guido van Rossum\n");
    printf("Enter your answer: ");
    scanf("%d", &ans);

    if(ans == 1)
        score++;

    printf("\nQ3. 2 + 3 = ?\n");
    printf("1. 4\n2. 5\n3. 6\n4. 7\n");
    printf("Enter your answer: ");
    scanf("%d", &ans);

    if(ans == 2)
        score++;

    printf("\nYour Score = %d out of 3\n", score);

    return 0;
}
