/*
    Ask to user to input three numbers.
    Calculate and print the avarage theese three numbers.
*/

#include <iostream>

using namespace std;

int main(){

    double numA;
    double numB;
    double numC;

    cout << "Input the first number: ";
    cin >> numA;

    cout << "Input the second number: ";
    cin >> numB;

    cout << "Input the third number: ";
    cin >> numC;

    cout << "The avarage between thoose three numbers is: " << (numA + numB + numC) / 3;

    return 0;
}