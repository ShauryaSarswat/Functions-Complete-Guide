#include<iostream>
using namespace std;
void incrementationByOne(int a)//formal Parmeter
{
    a=a+1;
    cout<<"Value inside function - Formal Parameter Value - "<<a<<'\n';
}
int main()
{
    int a;//actual parameter
    cout<<"Enter value of a \n";
    cin>>a;
    cout<<"Vaue inside Main() - Actual Parameter Value - "<<a<<'\n';//Actual Parameter before function calling
    incrementationByOne(a);//function calling - will print the value of the formal parameter as function has a cout
    cout<<"Vaue inside Main() - Actual Parameter Value - "<<a;//Actual Parameter after function calling
    return 0;
}