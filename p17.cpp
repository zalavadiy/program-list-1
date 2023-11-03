/*Write a C++ program to demonstrate use of Function Overloading.*/
#include<iostream>
using namespace std;
void max(int a, int b)
{
    int Max;
    Max=(a>b)?a:b;
    cout<<"Maximum number is :: "<<Max<<endl;
}
void max(float a, float b)
{
    float Max;
    Max=(a>b)?a:b;
    cout<<"Maximum number is :: "<<Max<<endl;
}
int main()
{
    int num1,num2;
    float n1,n2;
    cout<<"Enter the first integer number :: ";
    cin>>num1;
    cout<<"Enter the second integer number :: ";
    cin>>num2;
    max(num1,num2);
    cout<<"Enter the first float number :: ";
    cin>>n1;
    cout<<"Enter the second float number :: ";
    cin>>n1;
    max(n1,n2);
    return 0;
}