//220130318058
//krisha zalavadiya
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	float p,t,r,si;
	cout<<"Enter the Initial Principle:"<<endl;
	cin>>p;
	cout<<"Enter the Rate of Intrest :"<<endl;
	cin>>r;
	cout<<"Enter the Number of time interval:"<<endl;
	cin>>t;
	si=(p*r*t)/100;
	cout<<"Simple Intrest is :"<<si;
	
	return 0;
}
