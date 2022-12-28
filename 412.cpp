#include <iostream>
using namespace std;

bool check(int n){
    int sum = 0;
    for (int i = 1; i <= n - 1; i++){
        if (n % i == 0){
            sum += i;
        }
    }
    if (sum == n){
        return true;
    }
    else return false;
}

int main(){
    int n;
    cin >> n;
    if (n == 0){
        cout << 0;
    }
    else cout << check(n);
    return 0;
}