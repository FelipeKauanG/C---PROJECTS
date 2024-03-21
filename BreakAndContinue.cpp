#include <iostream>

using namespace std;

int main(){

    /*
        Break = break out of a loop
        continue = skip current iteration
    */

   for (int i = 1; i <= 20; i++)
   {
    if(i % 2 == 0 || i == 3){
        continue;
    }
    cout << i << "\n";
    
   }
   
   

    return 0;
}