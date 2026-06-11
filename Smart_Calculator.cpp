#include <iostream>
using namespace std;

// Overloaded functions named add()
int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

int add(int a, int b, int c) {
    return a + b + c;
}

// Inline function square()
inline double square(double num) {
    return num * num;
}

int main() {
    // Variables for input
    int int1, int2, int3;
    double float1, float2, squareNum;

    // Two integers
    cout << "Enter two integers: ";
    cin >> int1 >> int2;
    cout << "Result: " << add(int1, int2) << endl;

    // Two floating-point numbers
    cout << "Enter two floating-point numbers: ";
    cin >> float1 >> float2;
    cout << "Result: " << add(float1, float2) << endl;

    // Three integers
    cout << "Enter three integers: ";
    cin >> int1 >> int2 >> int3;
    cout << "Result: " << add(int1, int2, int3) << endl;

    // Square function execution
    cout << "Enter a number to square: ";
    cin >> squareNum;
    cout << "Result: " << square(squareNum) << endl;

    return 0;
}
