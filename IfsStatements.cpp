#include <iostream>

using namespace std;

int main(){

    /*
        If statements = do domething if a condição is True:
            If not, then don't do it. 
    */

   int age;

   cout << "Enter your age: ";
   cin >> age;

   if (age >= 100)
   {
    cout << "\nYou are too old to enter this site!";
   }
   else if (age < 0){
    cout << "\nYou haven't been born yet!";
   }
   else if(age >= 18){
    
    cout << "\nWelcome to the site!";
   }
   else{
    cout << "\nYour aren't old enough to enter!";
   }
   
    if (/* condition */)
    {
        /* code */
    }
    return 0;
}