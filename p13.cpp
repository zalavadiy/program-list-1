//.Write a C++ program to demonstrate use of constant argument
#include<iostream>
using namespace std;
int test (const int);
int main()
{
    cout<<test(5);
    return 0;
}
int test (const int z)
{
    return z;
}