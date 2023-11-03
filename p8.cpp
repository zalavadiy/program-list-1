//User Write a C++ program to convert km to cm, meter, inch and feet using manipulators endl, setw, setfill and setprecision.
#include <iostream>
#include <iomanip>
using namespace std;
int main() 
{
    const double kmToCm = 100000;  
    const double kmToM = 1000;   
    const double kmToInch = 39370.1; 
    const double kmToFeet = 3280.84; 
    double kilometers;

    cout << "Enter distance in kilometers: ";
    cin >> kilometers;

    double cm = kilometers * kmToCm;
    double m = kilometers * kmToM;
    double inches = kilometers * kmToInch;
    double feet = kilometers * kmToFeet;

    cout << fixed << setprecision(2);
    cout << "Distance in centimeters: " << setw(15) << cm <<endl;
    cout << "Distance in meters: " <<setw(20) << m <<endl;
    cout << "Distance in inches: " <<setw(20) << inches <<endl;
    cout << "Distance in feet: " <<setw(22) << feet <<endl;

    return 0;
}