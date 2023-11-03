//.Write a C++ program to find area of circle using formula pi*r2 Take the value of pi as default argument in function
#include<iostream>
using namespace std;
int area (float r, float r, pi=3.14)
{
     return (pi*r*r);
}

int main ()
{
    float r;
    cin<<r;
    area (r);
    cout<<"Area of the circle ::"<<area(r)<<endl;
    return 0;
}
/*
#include <iostream>

double calculateArea(double radius, double pi = 3.14159) {
    return pi * radius * radius;
}

int main() {
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    double area = calculateArea(radius);

    cout << "Area of the circle with radius " << radius << " is: " << area << endl;

    return 0;
}

*/