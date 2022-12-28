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
    cin >> n;
    if (n == 1){
        cout << -1;
    }
    else{
        cout << check(n);
    }

}