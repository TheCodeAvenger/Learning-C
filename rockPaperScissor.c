#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    // main insights
    // 0 --> Rock
    // 1 --> Paper
    // 2 --> Scissor

    // game variable
    int computerChoice, userChoice;

    // asking user to make choice

    printf("Enter your choice --> \n select from 0 for Rock\n 1 for paper \n 2 for scissor\n");
    scanf("%d", &userChoice);

    // computer choice
    // changing random seed

    srand(time(0));
    computerChoice = rand() % 3;

    printf("user choice : %d, computer choice : %d\n", userChoice, computerChoice);

    // comparison : winner-loser declaration

    if (userChoice == 0 && computerChoice == 0)
    {
        printf("its a Draw\n !");
    }
    else if (userChoice == 0 && computerChoice == 1)
    {
        printf("Computer Wins\n !");
    }
    else if (userChoice == 0 && computerChoice == 2)
    {
        printf("User Wins\n !");
    }

    else if (userChoice == 1 && computerChoice == 0)
    {
        printf("User Wins\n !");
    }
    else if (userChoice == 1 && computerChoice == 1)
    {
        printf("its a Draw\n !");
    }
    else if (userChoice == 1 && computerChoice == 2)
    {
        printf("Computer Wins\n !");
    }

    else if (userChoice == 2 && computerChoice == 0)
    {
        printf("Computer Wins\n !");
    }
    else if (userChoice == 2 && computerChoice == 1)
    {
        printf("User Wins\n !");
    }
    else if (userChoice == 2 && computerChoice == 2)
    {
        printf("its a Draw\n !");
    }

    return 0;
}
