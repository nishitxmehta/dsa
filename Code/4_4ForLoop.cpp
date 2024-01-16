// Write a program to print square of 'n' numbers.

#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter a number: ";
    cin >> n;

    for (int count = 1; count <= n; count = count + 1) // first we initialise, then we write a break condition and at last we write the iteration.
    {
        cout << count << " Square is: " << count * count << "\n";
    }
}