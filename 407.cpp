#include <iostream>
#include <iomanip>
using namespace std;

#include <math.h>

double calculate(int n){
    double S = 1;
    for (int i = 2; i <= n; i++){
        S = sqrt(i+S);
    }
    return S;
}


int main() {
	int n;
	cin >> n;
    cout <<fixed<<setprecision(2)<< calculate(n);
    return 0;
}
