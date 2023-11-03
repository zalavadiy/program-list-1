// 220130318038
// Bhvay Bhuva
// Write a C++ program for setfill function.
#include <iostream>     
#include <iomanip>
using namespace std;  
int main () 
{
    int m,d,y;
    cout<<"Enter the birth date"<<endl;
    cout<<"Enter the date :: ";  
    cin>>d;
    cout<<"Enter the month :: ";
    cin>>m;
    cout<<"Enter the year :: ";
    cin>>y;
    cout<<"Your Birth date is :: "<<setfill('0')<<setw(2)<<d<<"-";
    cout<<setfill('0')<<setw(2)<<m;
    cout<<-y;  
    return 0;  
}