#include<stdio.h>
int main(){
    int n,temp,digit,sum=0;
    printf("enter the number");
    scanf("%d",&n);
    temp=n;
    while(temp>0)
    {
        digit=temp%10;
        sum =sum + digit;
        temp = temp/10;
    }
    printf("sum of digit of %d is %d ",n,sum);
    return 0;
}