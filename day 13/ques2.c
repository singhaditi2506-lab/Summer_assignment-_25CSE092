#include<stdio.h>
int main()
{
    int arr[100],n,i,sum=0;
    float avg;
    printf("enter number of elements: ");
    scanf("%d",&n);
    printf("enter array elements :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
         sum = sum + arr[i];  
        }
        avg = (float)sum/n;
        printf("sum is %d\n",sum);
        printf("average is %.2f\n",avg);
        return 0;

    
}