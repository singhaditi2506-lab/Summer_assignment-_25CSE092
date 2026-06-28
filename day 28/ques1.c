#include <stdio.h>
int main()
{
    char book[50];
    char author[50];
    printf("enter book number: ");
    scanf("%s",book);
    printf("enter author name: ");
    scanf("%s",author);
    printf("\nbook name: %s",book);
    printf("\nauthor name: %s",author);
    return 0;
}