#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int randomizer(int number)
{
    int slump;
    srand(time(0));


    
        int randomizedNumber = rand();
        slump = randomizedNumber % 100  + 1;
    
    return slump;

}

int main(void)
{

    int guess, random = 0, amount = 0;

    random = randomizer(random);


    do
    {



        printf("Guess a number between 1 and 100: ");
        scanf_s("%d", &guess);
        amount++;

        if (guess == random)
        {
            printf("Correct answer!\n");


        }

        if (guess < random && guess >= 1)
        {

            printf("Too low!\n");
        }

        if (guess > random && guess <= 100)
        {

            printf("Too high!\n");
        }


        if (guess < 1 || guess > 100)
        {
            printf("Not in the interval try again!\n");
        }

    } while (guess != random);

    printf("You took % d attempts to get the right number!", amount);

    return 0;
}
