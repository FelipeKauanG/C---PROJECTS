#include <iostream>
#include <math.h>
/*
    Make a program in c++ that ask to user to input the circle radius, and right way calculate the circle area and the perimeter
*/

using namespace std;


int main(){

    double radius;

    cout << "\n***** CIRCLE AREA CALCULATOR *****";
    cout << "\n\nInput the radius (cm): ";

    cin >> radius;

    cout << "The radius is: " << radius << "cm " << "\nThe perimeter is: " <<  2 * 3.1415 * radius << "cm " << "\nThe circle area is: " << pow(radius, 2)*3.1415 << "cm";

    return 0;
}