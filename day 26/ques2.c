#include<stdio.h>
int main()
{
    int age ;
    printf("enter your age: ");
    scanf("%d",&age);
    if(age>=18)
    printf("eligible for voting.\n");
    else
    printf("not eleigible for voting.\n");
    return 0;
}