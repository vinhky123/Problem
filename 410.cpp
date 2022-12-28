#include <iostream>
using namespace std;

long int GiaiThuaKep(int n){
    long int s = 1;
    if (n % 2 == 0){
        for (int i = 2; i <= n; i += 2){
            s *= i;
        }
    }
    else{
        for (int i = 1; i <= n; i += 2){
            s *= i;
        }
    }
    return s;
}

int main(){
    int n;
    cin >> n;
    cout << GiaiThuaKep(n);
    return 0;
}