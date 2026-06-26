#include<stdio.h>
int main()
{
    int ans,score=0;
    printf("Q1.capital of india?\n");
    printf("1.delhi\n2.mumbai\n3.chennai\n");
    printf("enter answer: ");
    scanf("%d",&ans);
    if(ans==1)
    score++;
    printf("Q2.5+3 = ?\n");
    printf("1.6\n2. 8\n3. 10\n");
    printf("enter answer: ");
    scanf("%d",&ans);
    if(ans == 2)
    score ++;
    printf("your score = %d/2\n",score);
    return 0;

}