#include <iostream>

using namespace std;

int main(){
    
    int a=10;
    int b=5;

    // This all call Arithmetic .
    cout << a + b << endl; // Addition
    cout << a - b << endl; // Subtraction
    cout << a / b << endl; // Division
    cout << a * b << endl; // Multiplication

    // This is call Decrement operator.
    cout << ++a <<endl; // Pre - Increment i++=i=i+1 i--=i=i-1
    cout << --a <<endl; // Pre - decrement
    cout << a++ <<endl; // Post - Increment
    cout << a-- <<endl; // Post - decrement

    return 0;
}