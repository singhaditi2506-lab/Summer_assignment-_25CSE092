#include<stdio.h>
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("enter the number greater then zero");
        return 1;
    }
    printf("the factor of %d are" ,n);
    for (int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("%d ",i);
        }

    }
    return 0;
}