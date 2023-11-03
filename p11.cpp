//220130318058
//krisha zalavadiya
#include<iostream>
using namespace std;

int main()
{
	int a[3],i,max;
	
	for(i=0;i<3;i++)
	{
		cout<<"Enter the element ::"<<endl;
		cin>>a[i];
	}
	max=a[0];
	for(i=0;i<3;i++)
	{
		if(a[i]>max)
			max=a[i];
	}
	cout<<"Maximum number is ::"<<max<<endl;
	return 0;
}
