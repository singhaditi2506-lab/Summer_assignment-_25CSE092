#include<stdio.h>
int main()
{
    int n,temp,digit,r=0;
    printf("enter the number");
    scanf("%d",&n);
    temp =n;
    while(temp>0)
    {
        digit= temp%10;
        r =(r*10)+ digit;
        temp = temp/10;
    }
    printf("reverse of %d is %d",n,r);
    return 0;
}