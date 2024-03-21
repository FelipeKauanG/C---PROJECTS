#include <iostream>

using namespace std;

int main(){


    string name;

    cout << "Enter your name: ";
    getline(cin, name);
 

    cout << name.find("pa");
    /*if(name.length() > 12){
        cout << "Your name can't be over 12 characteres.";

    }
    else if (name.empty()){
        cout << "You didn't enter your name! ";
    }
    else{
        cout << "Welcome " << name;
    }*/
    
    


    return 0;
}