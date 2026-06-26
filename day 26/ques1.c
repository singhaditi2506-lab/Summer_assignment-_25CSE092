#include<stdio.h>
int main()
{
    int number = 7,guess;
    printf("guess the number (1-10): ");
    scanf("%d",&guess);
    if(guess == number)
    printf("correct! you guessed it.\n");
    else 
    printf("wrong! the correct number is %d\n",number);
    return 0;
}