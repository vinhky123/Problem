#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float a,b,c;
    cin >> a;
    cin >> b;
    cin >> c;
    double delta = pow(b,2) - 4 * a * c;
    if (delta < 0){
        cout << "PTVN";
    }
    else if (delta == 0){
        cout << "PT co nghiem kep: x1 = x2 = " << -b/(2*a);
    }
    else {
        cout << "PT co hai nghiem phan biet:" << endl;
        cout << "x1 = " << (- b + sqrt(delta))/(2*a) << endl;
        cout << "x2 = " << (- b - sqrt(delta))/(2*a) << endl;
    }
    return 0;
}