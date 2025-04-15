#include <stdio.h>
int main()
{

    // game variables

    char c1 = 'm', c2 = 'a', c3 = 'n', c4 = 'g', c5 = 'o'; // correct answer
    char g1 = '_', g2 = '_', g3 = '_', g4 = '_', g5 = '_'; // character which we will guess
    char user_input;

    int chances = 5; // 5 chances are to be given

    while (1)
    {
        // printing the welcome message

        printf("Guess the word : %c %c %c %c %c\n ", g1, g2, g3, g4, g5);

        // taking input from user
        scanf("%c", &user_input);

        // let's check  if user input matches any of correct answer
        if (user_input == c1)
        {
            g1 = user_input;
        }
        else if (user_input == c2)
        {
            g2 = user_input;
        }
        else if (user_input == c3)
        {
            g3 = user_input;
        }
        else if (user_input == c4)
        {
            g4 = user_input;
        }
        else if (user_input == c5)
        {
            g5 = user_input;
        }
        else
        {
            chances--;
            printf("%d Chances are left", chances);
        }

        // lets check for win -lose
        if (g1 != '_' && g2 != '_' && g3 != '_' && g4 != '_' && g5 != '_')
        {
            printf("Congrats ! you won ");
            break;
        }
    }
}