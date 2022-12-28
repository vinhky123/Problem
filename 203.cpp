#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a;
    cin >> b;
    double x = (static_cast<float>(-b))/(static_cast<float>(a));
    if (a == 0){
        if (b == 0){
            cout << "ℝ";
        }
        else {
            cout << "Ø";
        }
    }
    else{
        cout << "{" << x << "}";
    }
    return 0;
}