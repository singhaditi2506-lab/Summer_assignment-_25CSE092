#include<stdio.h>
int main()
{
    int n,i;
    char book[10][30];
    printf("enter number of books: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter book name: ");
        scanf("%s",book[i]);

    }
    printf("\nbook list\n");
    for(i=0;i<n;i++)
    {
        printf("%s\n",book[i]);

    }
    return 0;
}