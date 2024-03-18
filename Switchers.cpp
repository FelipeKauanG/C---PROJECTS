#include <iostream>
#include <cctype>

using namespace std;

int main(){
/*
    int month;

    cout << "Enter the mouth: (1 - 12)";

    cin >> month;

    switch(month){
        case 1:
            cout << "It's January!";
            break;
        case 2:
            cout << "It's February!";
            break;
        case 3:
            cout << "It's March!";
            break;
        case 4:
            cout << "It's April!";
            break;
        case 5:
            cout << "It's May!";
            break;
        case 6:
            cout << "It's June!";
            break;
        case 7:
            cout << "It's July!";
            break;
        case 8:
            cout << "It's August!";
            break;
        case 9:
            cout << "It's September!";
            break;
        case 10:
            cout << "It's October!";
            break;
        case 11:
            cout << "It's November!";
            break;
        case 12:
            cout << "It's December!";
            break;
        default:
            cout << "Please, enter in only numbers (1 - 12)";
    }   */


    char grade;
    cout << "What letter grade? ";
    cin >> grade;

    grade = toupper(grade);

    switch (grade){
    
    case 'A':
        cout << "You did great!";
        break;
    
    case 'B':
        cout << "You did good!";
        break;

    case 'C':
        cout << "You did OK";
        break;

    case 'D':
        cout << "You didn't good";
        break;

    case 'F':
        cout << "You failed!";
        break;
    
    default:
        cout << "Please only enter in a letter grade (A - F)";
        break;
    }
    
    return 0;
}
