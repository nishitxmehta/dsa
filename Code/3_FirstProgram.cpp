#include <iostream>  // This is called 'input output stream' header file. We use this header file whenever we want to 'input' or 'output' something. This file is one among many other header files. If we compile this code without writing this header file, the compiler will not be able to understand what is 'cout'. Therefore we need to include this header.
using namespace std; // "std" is automatically considered only before the keywords written in the header file. Eg: 'cout', 'cin', 'vector', etc.
// The header files are not included in compiler because if any point of time a bug arises, that specific header file can be updated by the developers.

int main() // As understood in the lecture 2, this is the 'start' of our code.
{

    cout << "Hello World!";          // To print anything on your computer screen use this method. 'cout' means character/console out. "<<" is called insertion operator. You can use this insertion operator multiple times.
    cout << 2 + 3;                   // This will give the sum of 2 + 3 = 5.
    cout << "2 + 3";                 // This will not give the sum of 2 + 3 but will print '2 + 3' on the screen as this is written under "" (double quotes). Anything under "" (double quotes) will directly be printed on screen.
    cout << "Hello Nishit!" << endl; // Here 'endl' will change line after printing "Hello Nishit!".
    cout << "Hello Nishit!\n";       // Another way to change line is using "\n" after the message we want to print. This "\n" works slightly faster than using "endl".

    int a;  // variable declaration
    a = 10; // variable defined

    int b = 10; // we can do this in way too, declaration + defination too.

    cout << "a"; // Output = a
    cout << a;   // Output = 10

    int c = 10, d = 20, e = 30; // we can do declaration + defination for more than one in this way too.

    cout << c + d; // Output = 30

    char f = 'a';
    cout << 'a'; // Output = a
    cout << f;   // Output = a

    float g = 2.31;
    cout << g; // Output = 2.31

    double h = 3.121;
    cout << h; // Output = 3.121

    bool i = 0;
    cout << i; // Output = 0

    bool j = true; // in boolean 'true' means '1'.
    cout << j;     // Output = 1

    bool k = false; // in boolean 'false' means '0'.
    cout << k;      // Output = 0

} // As understood in the lecture 2, this is the 'end' of our code.