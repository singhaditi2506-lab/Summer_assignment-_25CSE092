#include<stdio.h>
int main()
{
    int choice;
    float balance = 5000, amount ;
    printf("1.cheak balance\n");
    printf("2.deposit\n");
    printf("3.withdraw\n");
    printf("enter your choice: ");
    scanf("%d",&choice);
    if(choice == 1)
    {
        printf("balance = %.2f\n",balance);

    }
    else if(choice == 2)
    {
        printf("enter deposit amount: ");
        scanf("%f",&amount);
        balance = balance + amount;
        printf("new balance = %.2f\n",balance);

    }
    else if(choice == 3)
    {
        printf("enter withdraw amount: ");
        scanf("%f",&amount);
        if(amount <= balance)
        {
        balance = balance - amount ;
        printf("new balance = %.2f\n",balance);
}
else 
{
    printf("insufficiant balance\n");
    
}
    }
    else{
        printf("invalid choice\n");
    }
    return 0;
}