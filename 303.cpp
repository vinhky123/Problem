#include <iostream>
using namespace std;

int main(){
    unsigned int n;
    unsigned sum = 0;
    cin >> n;
    for ( int i = 1; i < n; i++){
        if (n % i == 0){
            sum += i;
        }
    }
    cout << sum;
    return 0;
}