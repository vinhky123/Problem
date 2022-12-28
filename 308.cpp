#include <iostream>
#include <math.h>
using namespace std;

int main(){
    unsigned int n;
    long long sum;
    sum = 0;
    cin >> n;
    while (n/10 != 0){
        sum += n % 10;
        n = n / 10;
    }
    sum += n;
    cout << sum;
    return 0;
}