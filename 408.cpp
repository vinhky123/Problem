#include <iostream>
using namespace std;

int reverse(int a){
    int n = 0;
    do{
        n = n * 10 + a % 10;
        a = a / 10;
    }
    while (a != 0);
    return n;
}

int main(){
    int n;
    cin >> n;
    cout << reverse(n);
    return 0;
}