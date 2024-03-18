#include <iostream>

using namespace std;

int main(){

    /*
        Ternary operator ?: = replacement to an if/else statement.
        condition ? expressional : expressional2;
    */


   /*int grade = 75;
   if(grade >= 60){
    cout << "You pass!";
   }
   else{
    cout << "You fail!";
   }
*/

    /*int grade = 75;

    grade >= 60 ? cout << "You pass!": cout << "You fail!";*/


    /*int number = 1;
    number % 2 == 1 ? cout << "It's ODD" : cout << "It's EVEN";*/

    bool hungry = true;
    hungry == true? cout << "You need to be fed": cout << "You're fine!";
    cout << (hungry ? "\nYou're hungry!" : "\nYou're full");
    return 0;
}