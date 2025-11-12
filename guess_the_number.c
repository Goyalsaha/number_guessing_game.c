#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));
    int guess_number = (rand() % 100) + 1;
    printf("%d",guess_number);
    int number;
    int no_of_turns = 0;
    do
    {
        printf("Enter a number between 1 to 100:\n");
        scanf("%d", &number);
        if (number < 100 && number > 1)
        {

            if (number > guess_number)
            {
                printf("you are too high from the number.\n");
            }
            else if (number < guess_number)
            {
                printf("you are too low from the number.\n");
            }

            no_of_turns++;
        }

        else
        {
            printf("Please enter a valid number!!");
        }
    } while (number != guess_number);

    printf("Yes! you guessed the correct the number. that is %d\n", guess_number);
    printf("The no. of trials are %d\n", no_of_turns);

    return 0;
}
