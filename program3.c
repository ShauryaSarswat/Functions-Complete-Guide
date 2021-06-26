#include<stdio.h>
void incrementationByOne(int a)//formal Parmeter
{
    a=a+1;
    printf("%d \n",a);
}
int main()
{
    int a;
    printf("Enter the value of the variable \n");
    scanf("%d",&a);
    printf("%d \n",a);
    incrementationByOne(a);
    printf("%d \n",a);
    return 0;

}