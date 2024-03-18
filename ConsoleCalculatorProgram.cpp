#include <iostream>

using namespace std;

int main(){

    char op;
    double num1;
    double num2;
    double result;

    cout << "\n********** CALCULADOR **********" << endl;
    cout << "********** Enter either (+ - * /) **********" << endl;
    cin >> op;
    cout << "Enter #1: ";
    cin >> num1;
    cout << "Enter #2: ";
    cin >> num2;
    
    switch (op){
    case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2;
        break;

    case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2;
        break;

    case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2;
        break;

    case '/':
        if (num2 == 0){
            cout << "Error, division by zero!";
        }
        else{
            cout << num1 << " / " << num2 << " = " << num1 / num2;
        }
        break;
    default:
        cout << "I can't resolve the operation!";
        break;
    }

    cout << "\n********************************";

    return 0;
}