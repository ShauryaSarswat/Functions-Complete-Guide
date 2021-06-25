#include<iostream>
using namespace std;
int calculator(int a,int b,char c)//formal parameters
{
    switch (c)
    {
        case '+' : return a+b;
        case '-' : return a-b;
        case '*' : return a*b;
        case '/' : return a/b;
        default : return 0;
    }
}
int main()
{
    int m,n;
    cout<<"Enter the two operators \n";
    cin>>m>>n;
    cout<<"Enter the operator that you want to use \n";
    char o;
    cin>>o;
    //m,n,o here are actual parameters
    int returnedValue = calculator(m,n,o);
    cout<<returnedValue<<'\n';
    //you can also use
    returnedValue = calculator(20,20,'+');
    cout<<returnedValue<<'\n';
    return 0;
}