#include<stdio.h>
int main()
{
    int n,i;
    int id[10];
    char name[10][30];
    printf("enter number of employees: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter employees ID : ");
        scanf("%d",&id[i]);
        printf("enter employee name: ");
        scanf("%s",name[i]);

    }
    printf("\nemployee details\n");
    for(i=0;i<n;i++)
    {
        printf("ID: %d\n",id[i]);
        printf("name: %s\n",name[i]);

    }
    return 0;

}