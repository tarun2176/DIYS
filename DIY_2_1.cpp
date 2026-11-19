#include <iostream>
using namespace std;

const double PI = 3.14159265;

// Cube: 1 argument
double volume(double side) {
    return side * side * side;
}

// Cuboid: 3 arguments
double volume(double l, double b, double h) {
    return l * b * h;
}

// Cylinder: 2 arguments (radius, height)
double volume(double r, double h, int /*unused*/ = 0) {
    return PI * r * r * h;
}

int main() {
    cout << "Cube (side 3): " << volume(3.0) << endl;
    cout << "Cuboid (2x3x4): " << volume(2.0, 3.0, 4.0) << endl;
    cout << "Cylinder (r=2, h=5): " << volume(2.0, 5.0) << endl;
    return 0;
}