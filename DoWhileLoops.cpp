#include <iostream>

using namespace std;

int main(){

    /*
        Do while loops = do some block of code first.
            Then repeat again if conditionis true. 
    */

    int number; // By default number is *Zero*


    do{
        cout << "Enter a positive number: ";
        cin >> number;

    }while(number < 0);

    cout << "The number is: " << number; 

    return 0;
}