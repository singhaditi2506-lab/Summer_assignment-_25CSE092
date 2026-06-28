#include<stdio.h>
int main()
{
    char name[50];
    char phone[50];
    printf("enter name: ");
    scanf("%s",name);
    printf("enter phone number: ");
    scanf("%s",phone);
    printf("\nname: %s",name);
    printf("\nphone number: %s",phone);
    return 0;
}