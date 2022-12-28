#include <iostream>
#include <iomanip>
using namespace std;

#include <math.h>

double calculate(int n){
    if (n >= 1)
    return sqrt(n + calculate(n-1));
    else return 0;
}

int main() {
	int n;
	cin >> n;
    cout <<fixed<<setprecision(2)<< calculate(n);
}
