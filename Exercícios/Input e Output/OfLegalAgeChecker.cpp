#include <iostream>

/*
    Write a program in C++ that receive the person age as input and determine if they is of legal age (age more than 18 years old ) or not.
*/

using namespace std;

int main(){
    
    int age;

    cout << "Input your age: ";
    cin >> age;

    age < 0 ? cout << "You haven't yet borned": (age >= 18? cout << "You're of legal age!":cout << "You'rent not of legal age!") ;

    return 0;
}