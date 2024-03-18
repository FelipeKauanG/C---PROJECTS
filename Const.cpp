#include <iostream>

using namespace std;

int main(){
    // The const keyword specifiques that a variable's value is constant
    // Tells the compiler anything from modifying it
    // (ready-only)

    /*const double PI = 3.14159;
    double radius = 10; // cm
    double circumference = 2 * PI * radius;

    cout << "The value circumference is: " << circumference <<"cm";*/

    const int LIGHT_SPEED = 299792458;
    const int WIDTH = 1920;
    const int HEIGHT = 1080;

    cout << "Light Speed: " << LIGHT_SPEED << " m/s\nWidth: " << WIDTH << "px\nHeight: " << HEIGHT << "px";

    return 0;
}
