/*
    Ask to user to input a number.
    The program could determinate if the number is Pair or Odd and print the anwsher.
*/

#include <iostream>

using namespace std;

int main(){
    int Number;
    cout << "Even or Odd Number checker\n";
    cout << "Place the number here: ";
    cin >> Number;

    if (Number % 2 == 0)
    {
        cout << "The number is Pair";
    }
    else{
        cout << "The number is Odd";
    }
    return 0;
}