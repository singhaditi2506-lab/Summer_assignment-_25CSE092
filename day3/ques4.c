#include<stdio.h>
int main()
{
    int n1,n2,max;
    printf("enter first number");
    scanf("%d",&n1);
    printf("enter second number");
    scanf("%d",&n2);
    if(n1>n2)
    {
        max = n1;
    }
    else {
        max = n2;
    }
    while (1)
    {
        if (max%n1 ==0 && max%2==0)
        {
            printf("1cm id %d",max);
            break;
        }
        max++;
    }
    return 0;
}