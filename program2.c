#include<stdio.h>
int calculator(int a,int b,char c)
{
    switch (c)
    {
    case '+' : return a+b;
    case '-' : return a-b;
    case '*' : return a*b;
    case '/' : return a/b;
    
    
    default:
       return 0;
        break;
    }
}
void main()
{
    int a,b;
    printf("Enter the value of the two operands \n");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("Enter the value of the operator \n");
    char c;
    scanf("%c",&c);
    scanf("%c",&c);
    int calculatedValue;
    calculatedValue=calculator(a,b,c);
    printf("The calculated value of the resultant of the configuartion you have entered is %d \n",calculatedValue);

}