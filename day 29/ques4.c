#include<stdio.h>
int main()
{
    char name[50];
    int qty;
    float price,total;
    printf("enter product name: ");
    scanf("%s",&name);
    printf("enter quantitiy: ");
    scanf("%d",&qty);
    printf("enter price");
    scanf("%f",&price);
    total = qty * price;
    printf("\nproduct : %s",name);
    printf("\nquantity : %d",qty);
    printf("\nprice : %.2f",price);
    printf("\ntotal amount : %.2f",total);
    return 0;



}
