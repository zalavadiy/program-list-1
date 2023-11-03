//Write a c++ program to add two numbers using Scope Resolution operator.
#include <iostream>
using namespace std;
class Calculator {
public:
    static int add(int a, int b) {
        return a + b;
    }
};

int main() 
{
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    int sum = Calculator::add(num1, num2);

    cout << "Sum of " << num1 << " and " << num2 << " is: " << sum << endl;

    return 0;
}
