#include <iostream>

using namespace std;

int main(){
    /*
        Type conversion = conversion a value of one datas type to another.
        Implicit = automatic
        Explicit = Precede value with new data type ( int )
    */

   //char x = 128;
   //cout << x;


    int correct = 8;
    int questions = 10;
    double score = correct/ (double) questions * 100;


    cout << score << "%";

    return 0;
}