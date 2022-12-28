#include <iostream>
using namespace std;

int sum_even_divisor(int n){
    int sum = 0;
    for (int i = 1; i <= n; i++){
        if (n % i == 0){
            if (i % 2 == 0){
                sum += i;
            }
        }
    }
    if (sum != 0){
        return sum;
    }
    if (sum == 0){
        return -1;
    }
}

int Input(){
    int n;
    cin >> n;
    return n;
}

int main() {
	int n;
	n=Input();
	cout << sum_even_divisor(n);
} 