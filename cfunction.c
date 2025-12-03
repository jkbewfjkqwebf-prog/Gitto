#include <stdio.h>

int main()
{
    int guess;
    int num;

    printf("Enter a number from 1 to 99\n");
    if (scanf("%d", &num) != 1)
    {
        fprintf(stderr, "Invalid input for the secret number\n");
        return 1;
    }

    printf("guess from 1 to 99\n");
    if (scanf("%d", &guess) != 1)
    {
        int c;
        fprintf(stderr, "Invalid input\n");
        while ((c = getchar()) != '\n' && c != EOF)
        {
        }
        /* Ask once more (minimal change) */
        printf("guess from 1 to 99\n");
        if (scanf("%d", &guess) != 1)
            return 1;
    }

    while (1)
    {
        if (guess > num)
        {
            printf("Too big\n");
            if (scanf("%d", &guess) != 1)
            {
                int c;
                printf("Invalid input\n");
                while ((c = getchar()) != '\n' && c != EOF)
                {
                }
                continue;
            }
        }
        else if (guess < num)
        {
            printf("Too small\n");
            if (scanf("%d", &guess) != 1)
            {
                int c;
                printf("Invalid input\n");
                while ((c = getchar()) != '\n' && c != EOF)
                {
                }
                continue;
            }
        }
        else
        {
            printf("Congrats\n");
            break;
        }
    }

    return 0;
}