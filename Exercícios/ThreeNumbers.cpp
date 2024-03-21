#include <iostream>

/*
    Make a program that rea three num,ber and show the bigger between than they
*/

using namespace std;

int main(){

    int numA;
    int numB;
    int numC;

    cout << "Input the First number: ";
    cin >> numA;
    cout << "Input the Second number: ";
    cin >> numB;
    cout << "Input the Third number: ";
    cin >> numC;

    if(numA > numB and numA > numC){
        cout  << numA << " Is First value and bigger";
    }else if(numB > numA and numB > numC){
        cout << numB << " Is Second value and bigger";
    }else{
        cout << numC << " Is Third value and Biger";
    }
    return 0;
}