/*
    Ask to user that input a température in Celcius.
    Convert this temperature to Fahrenheit and shows the result
*/
  

#include <iostream>

using namespace std;

int main(){
    double Celcius;
    cout << "Input any temperature in Celcius: ";
    cin >> Celcius;

    cout << Celcius << " C"<< char(248)<< " In Fahrenreit is " << Celcius*1.8 + 32 << char(248);

    return 0;
}