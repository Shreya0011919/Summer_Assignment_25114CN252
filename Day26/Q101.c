#include <stdio.h>

int main()
{
    int secret = 25, guess;

    printf("Number Guessing Game\n");

    do
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if(guess > secret)
            printf("Too High!\n");
        else if(guess < secret)
            printf("Too Low!\n");
        else
            printf("Correct Guess!\n");

    } while(guess != secret);

    return 0;
}
