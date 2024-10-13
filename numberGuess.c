#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randNum;
int *PrandNum = &randNum;
void randNumGen(int maxVal)
{
    srand(time(0));
    *PrandNum = (rand() % maxVal) + 1;
}

void randNumGuess()
{

}


int main()
{
    int num;
    int totalGuess = 0;

    randNumGen(10);
    printf("randNum: %d", randNum);

    while (totalGuess < 5)
    {
        printf("enter a number between 1 and 10: ");
        scanf("%d", &num);

        if (num > 10 || num <= 0)
        {
            printf("Please enter a number between 1 and 10.\n");

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
    printf("The correct number is: %d\n", randNum);

    return 0;
}