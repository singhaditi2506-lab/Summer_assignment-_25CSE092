#include<stdio.h>
int main()
{
    int arr[100],n,i,even=0,odd=0;
    printf("enter number of elements :");
    scanf("%d",&n);
    printf("enter array element :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        {
            even++;
        }
        else{
            odd++;
        }
    }
    printf("enter of even element is %d\n",even);
    printf("number of odd element is %d\n",odd);
    return 0;
}