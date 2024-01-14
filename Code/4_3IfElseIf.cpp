// Write a program to check whether the number is positive, negative or zero.

#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;

    if (number > 0) // we can use 'if' only for one time.
        cout << "Positive";
    else if (number == 0) // we can use 'else if' as many times we want depending upon our conditons.
        cout << "Zero";
    else
        cout << "Negative"; // we can use 'else' only for one time.
}
