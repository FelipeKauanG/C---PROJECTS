#include <iostream>

using namespace std;
int main(){

    /*
        cout << ( insertion operator )
        cin >> ( extraction operator )
    */  

    string name;
    int age;

    cout << "What's your name ?";
    getline(cin, name);
    

    cout << "What's your age? ";
    cin >> age;


    cout << "Hello " << name << "\nYou are " << age << " years old!";
    return 0;
}
