#include <stdio.h>
#include <windows.h>

int main()
{
    // game variables
    char userInput, correctAnswer;
    int score = 0; // Initialize score

    // Greeting message
    printf("Deviyon and Sajjano, welcome to Kaun Banega Codepati!\n");

    // delay before presenting question
    Sleep(2000);

    // ---------------- Question 1 ----------------
    printf("\nYeh raha pehla question 1000 rs ke liye, aapki screen par:\n");
    printf("\nQ1. Who has scored the most runs in a single IPL season?\n");

    Sleep(1000);
    printf("A) David Warner\n");
    Sleep(1000);
    printf("B) Virat Kohli\n");
    Sleep(1000);
    printf("C) Jos Buttler\n");
    Sleep(1000);
    printf("D) KL Rahul\n\n");

    correctAnswer = 'B';

    printf("Your answer: ");
    scanf(" %c", &userInput);

    if (userInput == correctAnswer || userInput == (correctAnswer + 32))
    {
        score++;
        printf("Correct answer! Your score is: %d\n", score);
    }
    else
    {
        score--;
        printf("Wrong answer! Your score is: %d\n", score);
    }

    Sleep(2000);

    // ---------------- Question 2 ----------------
    printf("\nYeh raha dusra question 2000 rs ke liye, aapki screen par:\n");
    printf("\nQ2. Which team has won the most IPL titles as of 2024?\n");

    Sleep(1000);
    printf("A) Chennai Super Kings\n");
    Sleep(1000);
    printf("B) Kolkata Knight Riders\n");
    Sleep(1000);
    printf("C) Royal Challengers Bangalore\n");
    Sleep(1000);
    printf("D) Gujarat Titans\n\n");

    correctAnswer = 'A';

    printf("Your answer: ");
    scanf(" %c", &userInput);

    if (userInput == correctAnswer || userInput == (correctAnswer + 32))
    {
        score++;
        printf("Correct answer! Your score is: %d\n", score);
    }
    else
    {
        score--;
        printf("Wrong answer! Your score is: %d\n", score);
    }

    Sleep(2000);

    // ---------------- Question 3 ----------------
    printf("\nYeh raha teesra question 3000 rs ke liye, aapki screen par:\n");
    printf("\nQ3. Who was the first player to take a hat-trick in IPL history?\n");

    Sleep(1000);
    printf("A) Amit Mishra\n");
    Sleep(1000);
    printf("B) Makhaya Ntini\n");
    Sleep(1000);
    printf("C) Lakshmipathy Balaji\n");
    Sleep(1000);
    printf("D) Rohit Sharma\n\n");

    correctAnswer = 'C';

    printf("Your answer: ");
    scanf(" %c", &userInput);

    if (userInput == correctAnswer || userInput == (correctAnswer + 32))
    {
        score++;
        printf("Correct answer! Your score is: %d\n", score);
    }
    else
    {
        score--;
        printf("Wrong answer! Your score is: %d\n", score);
    }

    Sleep(2000);

    // ---------------- Question 4 ----------------
    printf("\nYeh raha chautha question 4000 rs ke liye, aapki screen par:\n");
    printf("\nQ4. Which player has hit the most sixes in IPL history?\n");

    Sleep(1000);
    printf("A) MS Dhoni\n");
    Sleep(1000);
    printf("B) Rohit Sharma\n");
    Sleep(1000);
    printf("C) Chris Gayle\n");
    Sleep(1000);
    printf("D) AB de Villiers\n\n");

    correctAnswer = 'C';

    printf("Your answer: ");
    scanf(" %c", &userInput);

    if (userInput == correctAnswer || userInput == (correctAnswer + 32))
    {
        score++;
        printf("Correct answer! Your score is: %d\n", score);
    }
    else
    {
        score--;
        printf("Wrong answer! Your score is: %d\n", score);
    }

    Sleep(2000);

    // ---------------- Question 5 ----------------
    printf("\nAur yeh raha aakhri sawaal 5000 rs ke liye, aapki screen par:\n");
    printf("\nQ5. In which year was the IPL first played?\n");

    Sleep(1000);
    printf("A) 2006\n");
    Sleep(1000);
    printf("B) 2007\n");
    Sleep(1000);
    printf("C) 2008\n");
    Sleep(1000);
    printf("D) 2009\n\n");

    correctAnswer = 'C';

    printf("Your answer: ");
    scanf(" %c", &userInput);

    if (userInput == correctAnswer || userInput == (correctAnswer + 32))
    {
        score++;
        printf("Correct answer! Your final score is: %d\n", score);
    }
    else
    {
        score--;
        printf("Wrong answer! Your final score is: %d\n", score);
    }

    Sleep(2000);
    printf("\nThank you for playing Kaun Banega Codepati! 🙌🏆\n");

    return 0;
}
