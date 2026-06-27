#include<stdio.h>
struct employee
{
    int id;
     char name[50];
    float salary;
};
int main()
{
    struct employee e;
    printf("enter employee ID: ");
    scanf("%d",&e.id);
    printf("enter employee name: ");
    scanf("%s",e.name);
    printf("enter salary: ");
    scanf("%f",&e.salary);
    printf("\nemployee details\n");
    printf("ID= %d\n",e.id);
    printf("name = %s\n",e.name);
    printf("salary = %.2f\n",e.salary);
    return 0;

}