//Write a C++ program to demonstrate use of call by reference.
#include <iostream>  
using namespace std;
void swap (int &, int &);
int main()
{
    int a,b;
    cout<<"Enter the frist number :: ";
    cin>>a;
    cout<<"Enter the second number :: ";
    cin>>b;
    cout<<"Before swapping "<<a<<" & "<<b<<endl;
    swap(a,b);
    cout<<"After swapping "<<a<<" & "<<b;
    return 0;
}
void swap (int & p,int & q)
{
    int temp;
    temp=p;
    p=q;
    q=temp;
}