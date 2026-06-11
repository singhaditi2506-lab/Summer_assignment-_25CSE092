#include<stdio.h>
int findfactorial(int n);
int main()
{
    int num,fact;
    printf("enter the number");
    scanf("%d",&num);
    {
        if(num<0)
        {
            printf("factorial of a negative number does not exist ");
        }
        else 
        {
            fact =findfactorial(num);
            printf("factorial of %d =%d\n",num,fact);
        }
        
    }
    return 0;
}
int findfactorial(int n)
{
    int result = 1;
    for(int i=1;i<=n;i++)
    {
        result=result*i;
    }
    return result;
}