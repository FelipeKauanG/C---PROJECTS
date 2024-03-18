#include <iostream>

using namespace std;

int main(){
    /*int x; //declaration
    x = 5; //assigment

    float y = 1.5; //declaration + assigment

    cout << "The number is: " << x << "\nThe next number is: " << y;
    cout << "\n\nThe sum them is: " << x + y;*/

    //Integers (whole numbers)
    int age = 20;
    int year = 2003;
    int days = 100.5; //Integer value because "int", not "float"

    //Double (number including decimal)
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;

    //Strings (objects that represents a sequance of text)
    string name = "Felipe";
    string day = "sunday";
    string adress = "Nº 1234 Fake st";

    //single charecter
    char grade = 'S'; //Single quotes
    char initial = 'F';
    char coinSign = 'R';
    
    //Boolean (treu or false)
    bool married = false;
    bool student = true;
    bool employed = false;

    //prints
    cout << "Hello! My name is " << name << ", i'm " << age << " years old." << endl;
    cout << "Today is " << day << endl;
    cout << "I live in " << adress << endl;
    cout << "\nMore infos: " << "\n\tMarried: " << married << "\n\tStudent: " << student << "\n\tEmployed: " << employed << "\n\tGrade: " << grade;

    return 0;
    
}
