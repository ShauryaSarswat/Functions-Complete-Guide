#include<iostream>
using namespace std;
void sum()
{
    int a,b;
    cout<<"Enter the two vairables \n";
    cin>>a>>b;
    int sum = a+b;
    cout<<"The sum of the two variables is "<<sum<<'\n';
}
int main()
{
    sum();
    sum();
    sum();
    return 0;  
}