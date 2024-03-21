/*
    Ask to userr to input the circle radius.
    Calculate and show the circle area using the formula ( area  = 2.PI² )
*/

#include <iostream>
#include <cmath>


using namespace std;

int main(){
    double radius;
    const double pi = 3.1415;


    cout << "Input the circle radius here (cm): ";
    cin >> radius;

    cout << "Circle area is: " << pi *  pow(radius, 2) << "cm^2";


    return 0;
}