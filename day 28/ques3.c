#include<stdio.h>
int main()
{
    char name[50];
    int tickets;
    printf("enter name: ");
    scanf("%s",name);
    printf("enter number of tickets: ");
    scanf("%d",&tickets);
    printf("\npassanger name: %s",name);
    printf("\ntickets booked:%d",tickets);
    return 0;

}