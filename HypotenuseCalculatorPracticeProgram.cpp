#include <iostream>
#include <cmath>

using namespace std;

int main(){

    double x;
    double y;
    

    cout << "X: ";
    cin >> x;

    cout << "Y: ";
    cin >> y;

    double z =  sqrt(pow(x, 2) + pow(y, 2));
    cout << "\nX = " << x << "\nY = " << y << "\nHipotenuse = " << z;



    return 0;
}