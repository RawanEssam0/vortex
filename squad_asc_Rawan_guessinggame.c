#include <stdio.h>

void main()
{
    int secretNumber = 7;
    int guess, counter=0;
    printf("You have 3 guesses \nEnter a number: ");
    scanf("%d",&guess);
    while(guess!= secretNumber && counter <2)
    {
        printf("Guess another number: ");
        scanf("%d",&guess);
        counter ++;
    }
    if (guess ==secretNumber)
        printf("CONGRATULATIONS, YOU WIN !");
    else
        printf("Out of guesses");
}
