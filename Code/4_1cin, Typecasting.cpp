#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter your first number: ";
    cin >> a; // To input anything on your computer screen use this method. 'cin' means character/console in. ">>" is called extraction operator. You can use this extraction operator multiple times.
    cout << "Enter your second number: ";
    cin >> b;

    cout << "Sum of two numbers is: " << a + b;

    int c = 66;
    char d = 'b';
    d = c; // Typecasting
    cout << d;
}