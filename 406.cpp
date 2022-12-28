#include <iostream>
using namespace std;

int UCLN(int a, int b){
    int max = 0;
    for (int i = 1; i <= a; i++){
        if ((a % i == 0)&&(b % i == 0)){
            max = i;
        }
    }
    return max;
}

int main(){
    int a,b;
    cin >> a >> b;
    cout << UCLN(a,b);
    return 0;
}