// 220130318038
// Bhvay Bhuva
// Write a C++ program to define a function outside the class using scope resolution operator
#include <iostream>
using namespace std;

class A 
{
	public:	
		void fun();
};
int main()
{
	A a;
	a.fun();
	return 0;
}
void A::fun() 
{ 
	cout << "Hello welcome"; 
}
