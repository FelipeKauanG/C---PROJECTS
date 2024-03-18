/*
    Write a program that requests two number to user.

    The program could calculate and print the two numbers sum
*/

#include <iostream>
using namespace std;

int main(){
    double numA;
    double numB;

    cout << "First number: ";
    cin >> numA;

    cout << "Scond number: ";
    cin >> numB;

    cout << "The sum is: " << numA + numB;

    return 0;
}