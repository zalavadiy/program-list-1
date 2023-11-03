//220130318058
//krisha zalavadiya
#include<iostream>
using namespace std;

int main()
{
	int a[5],i;
	
	for(i=0;i<5;i++)
	{
		cout<<"Enter any number :: "<<endl;
		cin>>a[i];
	}
	for(i=0;i<5;i++)
	{
		if(a[i]<0)
		cout<<"Negative Number = "<<a[i]<<endl;
	}
	return 0;
}
