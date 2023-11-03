//.Write a C++ program to add two integer values using call by reference.
#include <iostream>  
using namespace std;
int add(int&,int&);
int main ()
{
    int a,b;
    cout<<"Enter the frist number :: ";
    cin>>a;
    cout<<"Enter the second number :: ";
    cin>>b;
    add(a,b);
    cout<<"Two number add :: "<<add(a,b);
}
int add(int & p, int & q)
{
    return p+q;
}