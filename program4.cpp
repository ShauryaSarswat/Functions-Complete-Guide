#include<iostream>
using namespace std;
void incrementation(int &a)
{
    a=a+1;
    cout<<"The value of the formal parameter - "<<a<<'\n';
}
int main()
{
    int a;
    cout<<"Enter the value of a \n";
    cin>>a;
    cout<<"Actual Parameter value before calling function - "<<a<<'\n';
    incrementation(a);
    cout<<"Actual parameter value after calling function - "<<a<<'\n';
    return 0;
}