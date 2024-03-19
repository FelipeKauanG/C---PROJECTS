#include <iostream>

/*
    Build a program that ask user to input a number and check if is Even, Odd or zero
*/

using namespace std;

    int main(){

    int num;
    cout << "Input a number: ";
    cin >> num;
    
    if (num == 0){
        cout << "This number is Zero!";
    }
    else if (num %1 != 0) {
        cout << "Please, input only numerical and integer characters!";
    }
    else if(num % 2 == 0){
        cout << "This number is Even!";
    }
    else if(num % 2 == 1){
        cout << "This number is Odd!";
    }
   

    return 0;
}