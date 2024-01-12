// Write a program input package from user. Print "Accepted" if its greater than "10" else print "Rejected".

#include <iostream>
using namespace std;

int main()
{
    int package;
    cin >> package;

    cout << "Enter your package: ";
    if (package > 10) // this returns '0' or '1'. If the condition is 'true' it will return '1' and exectue the 'if block' else will return '0' and execute the 'else block'.
    {
        cout << "Accepted";
    } // if block
    else
    {
        cout << "Rejected";
    } // else block

    // if curly braces are not after 'if block' and 'else block' then only the first line of their block is executed.
}