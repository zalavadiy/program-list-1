// 5. Write a C++ program for setprecision() function.
#include <iostream>    
#include <iomanip>     
using namespace std;  
int main()
{  
  float f;
  cout<<"Enter the float value :: ";
  cin>>f;
  cout<<"Your value is :: "<<f<<endl;
  cout<<"Precision value is :: "<<setprecision(3)<<f;
  return 0;  
}  