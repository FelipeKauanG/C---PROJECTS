#include <iostream>
#include <cctype>

using namespace std;

int main(){

    /*
        Make a program that Convert Temperature by Celcius C° to Fahrenheight F°;
    */

    double temp;
    char tempUnit;
    cout << "***** Temperature convertion *****";
    cout << "\nC = Celcius";
    cout << "\nF = Fahrenheit";
    cout << "\nWhat unit would you like to convert to: (C, F) ?";
    cin >>  tempUnit;

    tempUnit = tolower(tempUnit);

    if (tempUnit == 'f'){
        
        cout << "Enter the temperature (C): ";
        cin >> temp;
        cout << temp << "C to Fahrenheit is: " << temp *1.8 + 32;
    }
    else if (tempUnit == 'c'){
        cout << "Enter the temperature (F): ";
        cin >> temp;
        cout << temp << "F to Celcius is: " << (temp - 32) / 1.8;
        }
    else{
        cout << "\nError, input only C or F";
    }

    return 0;
}