#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int randNum;
int *PrandNum = &randNum;

int num;
int totalGuess = 1;

void randNumGen(int maxVal)
{
    srand(time(0));
    *PrandNum = (rand() % maxVal) + 1;
}

void randNumGuess()
{
    
    while (totalGuess < 6)
    {
        // char input[10];
        
        printf("enter a number between 1 and 10: ");

        if(scanf("%d", &num) != 1)
        {
            printf("invalid number.Try again!");
        
            while (getchar() != '\n');
            continue;
        }


        if (num > 10 || num <= 0)
        {
            printf("Please enter a number between 1 and 10.\n");
            continue;

        }else if (num == randNum)
        {
        printf("you've guessed the correct number!\n");
        // playerWon = true;
        break;

        }else
        {
            printf("You lost!\n");  
            totalGuess++;
        }
     
    }
}


int main()
{
    
    randNumGen(10);
    printf("randNum: %d\n", randNum);

    randNumGuess();

    printf("The correct number is: %d\n\n", randNum);
    printf("total guess required: %d\n", totalGuess);

    return 0;
}