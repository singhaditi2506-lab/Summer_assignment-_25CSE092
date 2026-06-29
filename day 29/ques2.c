#include<stdio.h>
int main()
{
    int a[100],n,i,ch,sum=0;
    printf("enter size: ");
    scanf("%d",&n);
    printf("enter element:\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("1.display\n2.sum\n");
    printf("enter choice: ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        printf("array: ");
        for(i=0;i<n;i++)
        printf("%d",a[i]);
        break;
        case 2:
        for(i=0;i<n;i++)
        sum += a[i];
        printf("sum= %d",sum);
        break ;
        default :
        printf("invalid choice");


        
    }
    return 0;
}
