#include <iostream>
#include <cctype>

/*
    Make a program that read a user character and determine if is a vocal or a consonant
*/
using namespace std;

int main(){

    char letter;

    cout << "Please input anything Letter: ";
    cin >> letter;

    letter = toupper(letter);

    if (letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U' ){
        cout << letter << " Is vocal";
    }
    else{
        cout << letter << " Is consonant";
    }

    return 0;
}