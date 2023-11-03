//.Write a C++ program to calculate square of a given number using inline function.
#include<iostream>
using namespace std;
inline int square (int);
int main()
{
    int a;
    cout<<"Enter the number ::";
    cin>>a;
    cout<<"Cube is :: "<<square(a);
    square(a);
    return 0;
}
inline int square (int a)
{
    return a*a;
}