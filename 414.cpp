#include <iostream>
using namespace std;

int Tinhtong(int n){
    int sum = (n / 10) + (n % 10);
    return sum;
}

int Tinhtich(int n){
    int multi = (n / 10) * (n % 10);
    return multi;
}

int main(){
    int n;
    cin >> n;
    if ((n >= 10)&&(n <= 99)){
        if (Tinhtich(n) == Tinhtong(n)){
            cout << "Tong bang tich";
        }
        else cout << "Tong khong bang tich";
    }
    return 0;
}