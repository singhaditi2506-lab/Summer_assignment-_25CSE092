#include<stdio.h>
void add()
{
    int a,b;
    printf("enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("sum = %d",a+b);

}
int main()
{
    int choice;
    printf("1.add\n");
    printf("enter your choice: ");
    scanf("%d",&choice);
    if(choice == 1)
    {
        add();
    }
    else
    {
        printf("invalid choice");

    }
    return 0;
}
