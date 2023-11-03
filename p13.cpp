//220130318058
//krisha zalavadiya
#include <iostream>
using namespace std;

int main()
{
    int a,b,temp;

    cout<<"Enter the value of a ::"<<endl;
    cin>>a;
    cout<<"Enter the value of b ::"<<endl;
    cin>>b;

    temp=a;
    a=b;
    b=temp;

    cout<<"After swapping"<<endl;
    cout<<"The value of a ::"<<a<<endl;
    cout<<"The value of b ::"<<b<<endl;
    
    return 0;
}

