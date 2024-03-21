#include <iostream>

using namespace std;

int main(){

    string name;

    do{
        cout << "Enter your name: ";
        getline(cin, name);

    }while (name.empty());
    
    cout << "Welcome to this exemple " << name;

    return 0;
}