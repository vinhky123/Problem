#include <iostream>
#include <math.h>
using namespace std;


int sum_all_square(int n){
	int sum = 0;
	for (int i = 1; i <= n; i++){
		if (n % i == 0){
			for (int j = 1; j <= i; j++){
				if (j * j == i){
					sum += i;
				}
			}
		}
	}
	return sum;
}


int main() {
    int n;
    cin>>n;
    cout << sum_all_square(n);
}