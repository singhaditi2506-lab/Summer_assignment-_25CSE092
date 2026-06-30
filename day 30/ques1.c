#include<stdio.h>
int main()
{
    int n,i;
    int roll[20];
    char name[20][30];
    float marks[20];
    printf("enter number of students: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nstudent %d\n",i+1);
        
        printf("enter roll no: ");
        scanf("%d",&roll[i]);
        printf("enter name: ");
        scanf("%s",name[i]);
        printf("enter marks: ");
        scanf("%f",&marks[i]);


    }
    printf("\n_____student records _____\n");
    for(i=0;i<n;i++)
    {
        printf("roll no : %d\n",roll[i]);
        printf("name : %s\n",name[i]);
        printf("marks : %.2f\n\n",marks[i]);
    }
    return 0;
}