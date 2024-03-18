#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double weight;
    double height;

    cout << "Height: ";
    cin >> height;

    cout << "Weight: ";
    cin >> weight;

    

    cout << "\nThe IMC is: " << (weight / ( pow(height, 2))) * 10000;

    return 0;
}