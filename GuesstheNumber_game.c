#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num, no, gno=0;
    srand(time(0));
    num = rand() % 100 + 1; //Generates random number between 1 and 100
    // printf("The number is %d\n", num);
    printf("Welcome to the guessing game\n");
    do
    {
        printf("Guess the number:\n");
        scanf("%d", &no);
        if (no == num)
        {
            printf("Congrats! You've guessed a correct number.\n");
        }
        else if (no > 100)
        {
            printf("You have guessed a very large number, Try a smaller number\n");
        }
        else if (no > num && no < 100)
        {
            printf("You have guessed a bigger number!\n");
        }
        else if (no < num && no > 0)
        {
            printf("You have guessed a smaller number!\n");
        }
        else if (no < 0)
        {
            printf("you have guessed a very small number, Try a positive number\n");
        }
    gno+=1;
    } while (no != num);
    printf("It took you %d guessses to get this correct!", gno);
    return 0;
}
