#include<stdio.h>
int main ()
{
    int n,temp,digit ,reverse =0;
    printf("enter the number");
    scanf("%d",&n);

    temp =n;
    while(temp>0)
{
    digit = temp%10;
    reverse = (reverse *10) + digit;
    temp = temp / 10;
}
if (n==reverse)
{
    printf("the number is palindrome",n);
}
else
{
    printf("the number is not palindrome",n);
}
return 0;

}