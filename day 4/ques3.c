#include<stdio.h>
int main ()
{
    int n, originalnum,rem,sum=0;
    printf("enter the number");
    scanf("%d",&n);
     

    originalnum=n;
    while(n>0)
    {
        rem=n%10;
        sum=sum + (rem*rem*rem);
        n=n/10;
    }
    if (sum==originalnum)
    {
        printf("%d is an armstrong number", originalnum);
    }
    else{
        printf("%d is not armstrong number", originalnum);
    }
    return 0;
}