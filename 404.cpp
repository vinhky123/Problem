#include <iostream>
#include <cmath>
using namespace std;

bool check(int n){
    if (n <= 3)
        return n > 1;
    else if ((n % 2 == 0)||(n % 3 == 0))
        return false;
    int j = 5;
    while (j * j <= n){
        if ((n % j == 0)||(n % (j + 2) == 0))
            return false;
        j = j + 6;
    }
    return true;
}

int gcd(int a, int b){
    if (a == 0 || b == 0){
        return a + b;
    }
    while (a != b){
        if (a > b){
            a -= b;
        }else{
            b -= a;
        }
    }
    return a;
}

int sum_all_square(int a, int b){
    int sum = 0;
    for (int i = 1; i <= gcd(a,b); i++){
        if ((check(i) == true)&&(gcd(a,b) % i == 0)){
            sum += i;
        }
    } 
    return sum;
}

int main(){
    int a,b;
    cin >> a >> b;
    if (sum_all_square(a,b) != 0){
        cout << sum_all_square(a,b);
    }
    else cout << -1;
    return 0;
}