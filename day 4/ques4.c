#include<stdio.h>
int main ()
{
    int n,originalnum,rem,start,end,sum;
    printf("enter starting number");
    scanf("%d",&start);
    printf("enter end number");
    scanf("%d",&end);
    printf("armstrong number between %d and %d is",start,end);
     
    for(int i=start; i<=end; i++)
    {
        n= i;
        originalnum =i;
        sum =0;
        while(n>0)
        {
            rem =n%10;
            sum =sum+(rem*rem*rem);
            n=n/10;

        }
        if(sum==originalnum)
        {
            printf("%d" ,originalnum);
        }
    }
    printf("\n");
    return 0;
}