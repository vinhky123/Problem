#include <iostream>
using namespace std;

int check(int n){
    int b = 0;
    for (int i = 1; i <= n; i ++){
        if (n % i == 0){
            b += 1;
        }
    }
    if (b == 2){
        return 1;
    }
    else return 0;
}

int main(){
    int n;
    int count;
    count = 0;
    cin >> n;
    for (int i = 1; i <= n - 2; i++){
        if ((check(i) == 1) && (check(i+2) == 1)){
            cout << i <<", "<< i+2 << endl;
            count += 1;
        }
    }
    cout << "Tong: "<<count<<" cap so sinh doi < "<<n;
    return 0;
}