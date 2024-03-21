#include <iostream>

using namespace std;

/*
  Write a program that ask to user a integer number N and calculate all the sums by 1 to N  
*/

int main(){

    int num;
    int sum = 0;
    do{
        cout << "Enter the integer num: ";
        cin >> num;
    }while(num <= 0);

    for(int i = 1; i <= num; i++){
        cout << i << ": " << sum << " + " << i << " = " << i + sum << endl;
        sum += i;
        
    }
    

    cout << "The sum by 1 to " << num << " is: " << sum;

    return 0;
}