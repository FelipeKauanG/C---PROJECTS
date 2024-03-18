#include <iostream>
#include <math.h>

using namespace std;

int main(){

    // Variables
    double x = 3;
    double y = 4;
    double z;
    double w;
    double v;
    double u;
    double t;
    double s;
    double r;

    z = max(x, y);
    w = min(x, y);
    v = pow(2, 4);
    u = sqrt(9);
    t = abs(-3);
    s = round(.6);
    r = ceil(2.1);


    // Prints
    cout << "\nZ is: "<< z << endl;
    cout << "W is: " << w << endl;
    cout << "V is: " << v << endl;
    cout << "U is: " << u << endl;
    cout << "T is: " << t << endl;
    cout << "S is: " << s << endl;
    cout << "R is: " << r << endl;

    return 0;
}