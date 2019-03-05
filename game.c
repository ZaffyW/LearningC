/*first input is the number to be guessed. Following inputs are the guesses. Tells the player
if the guess should be more or less */
#include <stdio.h>

int main (void)


{
  int number;
    int tries = 0;
    int guess;

    scanf("%d", &number);
    scanf ("%d", &guess);
    {
        while (number < guess)
            {
                printf("It's less\n");
                scanf("%d", &guess);
                tries = tries +1;
            }
        while (number > guess)
            {
                printf("It's more\n");
                scanf("%d", &guess);
                tries = tries +1;
            }
        if (guess == number)
            {
                printf("You got it!\n");
            }
    }
    printf("%d", tries + 1);

}