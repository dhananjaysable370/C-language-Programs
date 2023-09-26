#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main()
{

    int number, guess, nOfGuess = 1;
    srand(time(0));
    number = rand() % 100 + 1;
    // printf("The Number is %d\n",number);

    do
    {
        printf("\nGuess The Number Between 1 to 100 : ");
        scanf("%d", &guess);

        if (guess > number)
        {
            printf("Lower Number Please.!\n");
        }

        else if (guess < number)
        {
            printf("Higher Number Please.!\n");
        }

        else
        {
            printf("You Guessed It in %d Attempts\n", nOfGuess);
        }

        nOfGuess++;

    } while (guess != number);
}