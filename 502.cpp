#include <bits/stdc++.h>
#include <iostream>
using namespace std;
double SaiSo = 0.00001;

int GiaiThua(int n){
    if (n > 1) return n * GiaiThua(n-1);
}

double sin(int x){
    double sin = 0, saisohientai = 1.1 , bienthien;
    int n = 0;
    while (saisohientai > SaiSo){
        bienthien = pow(-1,n) * (pow(x, 2*n+1)/GiaiThua(2*n+1));
        sin += bienthien;
        saisohientai = abs(bienthien);
        n++;
    }
    return sin;
}

int main(){
    double x;
    cin >> x;
    cout << fixed << setprecision(4) << sin(x);
    return 0;
}