/*.Write a C++ program to overload a function named is “area”.*/
#include<iostream>
using namespace std;
const float pi=3.14;
void area (int a)
{
    int sum;
    sum=a*a;
    cout<<"square area :: "<<sum<<endl;
}
void area (int l, int b)
{
    int ans;
    ans=l*b;
    cout<<"Rectangle area is :: "<<ans<<endl;
}
void area (float r)
{
    float ans;
    ans=pi*r*r;
    cout<<"Crical area :: "<<ans<<endl;
}
int main()
{
    int len,bre,a;
    float red;
    cout<<"Enter the length :: ";
    cin>>len;
    cout<<"Enter the breath :: ";
    cin>>bre;
    area(len,bre);
    cout<<"Enter the side ";
    cin>>a;
    area(a);
    cout<<"enter the radius :: ";
    cin>>red;
    area(red);
    return 0;
}