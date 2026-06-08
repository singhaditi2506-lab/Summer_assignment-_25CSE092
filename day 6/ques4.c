#include<stdio.h>
int main()
{
    int x,n,result =1;
    printf("enter base");
    scanf("%d",&x);
    printf("enter power");
    scanf("%d",&n);
    while(n>0)
    {
        result=result*x;
        n = n-1;
    }
    printf("result =%d\n",result);
    return 0;
}