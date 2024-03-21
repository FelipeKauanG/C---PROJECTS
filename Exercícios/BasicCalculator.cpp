/*
    Make a basic calculator that allow two numbers and an operation (addition, subtraction, division, and multiplication).
    The program could show the operation result
*/

#include <iostream>

using namespace std;

int main(){

    double numA;
    double numB;
    double choose;

    cout << "Input the first value: ";
    cin >> numA;

    cout << "Input the second value: ";
    cin >> numB;


    cout << "\n(1)Addtion + " << endl;
    cout << "(2)Subtraticon - " << endl;
    cout << "(3)Mulplication * " << endl;
    cout << "(4)Division / " ;
    
    cout << "\nWich operation do you would do ?" << endl;
    cin >> choose;
    if (choose == 1)
    {
        cout << "The sum is: " << numA + numB;
    }
    if (choose == 2)
    {
        cout << "The sum is: " << numA - numB;
    }
    if (choose == 3)
    {
        cout << "The sum is: " << numA * numB;
    }
    if (choose == 4)
    {
        if (numB == 0 and choose == 4)
    {
        cout << "Error: Division by zero is undefined";
    }else{
        cout << "The sum is: " << numA / numB;
    }
    }
    
    
    
    

    return  0;
}