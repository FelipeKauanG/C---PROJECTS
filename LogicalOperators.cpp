#include <iostream>

using namespace std;

int main(){

    /*
        && = check two conditions are true;
        || = check if at least one of two conditions is true;
        !  = checkthe logical state of its operand;
    */

    int temp;
    bool sunny = true;

    cout << "Enter the temperature: ";
    cin >> temp;

    temp > 0 && temp < 30 ? cout << "The temperature is good": cout << "The temperature is bad!";
    sunny == true ? cout << "\nIt is sunny outside!": cout << "\nIts cloudy outside!";
    
    return 0;
}