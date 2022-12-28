#include <iostream>
using namespace std;

int TongChuSo(int a){
    int sum = 0;
    while (a != 0){
        sum += a % 10;
        a = a / 10;
    }
    return sum;
}

int main(){
    int a;
    cin >> a;
    cout << TongChuSo(a);
    return 0;
}