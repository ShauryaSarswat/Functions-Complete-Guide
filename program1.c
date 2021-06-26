#include<stdio.h>
void sum()
{
    int a,b;
    printf("Enter the two variables \n");
    scanf("%d%d",&a,&b);
    int sum = a+b;
    printf("The sum of the two variables is %d /n",sum);
    return;
}
int main()
{
    sum();
    sum();
    sum();
    return(0);
}