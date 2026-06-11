#include <iostream>
using namespace std;

// overload function to calculate the area
// for circle
double area(double radius) { 
    return 3.14159 * radius * radius;
}

// for rectangle
double area(double length, double width) { 
    return length * width;
}

int main() {
    cout << "Area of circle (r=5): " << area(5.0) << endl;
    cout << "Area of rectangle (4x5): " << area(4.0, 5.0) << endl;
    
    return 0;
}
