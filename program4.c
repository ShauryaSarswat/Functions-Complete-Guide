#include<stdio.h>

int main()
{
    int a;
    printf("Enter the value of the variable \n");
    scanf("%d",&a);
    printf("The value of the a in the int main() is %d",a);
    incrementationbyone(&a);
    printf("The value of the a int he main() after the calling of the function by the refrence %d \n",a);

}
void incrementationbyone(int *a)
{
    *a=*a+1;
    printf("The value that we recieve from the fucntion wil be %d \n",*a);
}