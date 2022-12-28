#include <iostream>
#include <math.h>
#include<bits/stdc++.h>
using namespace std;

bool checkTriangle(int a, int b, int c){
    if ((a + b <= c)||(a + c <= b)||(b + c <= a)){
        return false;
    }
    else return true;
}

bool checkcan(int a, int b, int c){
    if ((a == b)||(a == c)||(b == c)){
        return true;
    }
    else return false;
}

bool checkdeu(int a, int b, int c){
    if ((a == b)&&(a==c)){
        return true;
    }
    else return false;
}

bool checkvuong(int a, int b, int c){
    if ((pow(a,2) + pow(b,2) == pow(c,2))||(pow(a,2) + pow(c,2) == pow(b,2))||(pow(b,2) + pow(c,2) == pow(a,2))){
        return true;
    }
    else return false;
}

int main(){
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    if (checkTriangle(a, b, c) == false){
        cout << "Khong phai tam giac";
    }
    else {
        double square;
        double half = (static_cast<float>(a + b + c))/(static_cast<float>(2));
        square = sqrt(half * (half - a) * (half - b) * (half - c));
        if (checkvuong(a, b, c) == true){
            cout << "Tam giac vuong, dien tich = " << fixed << setprecision(2) << square;
        }
        else if (checkcan(a, b, c) == true){
            if (checkdeu(a, b, c) == true){
                cout << "Tam giac deu, dien tich = " << fixed << setprecision(2) << square;
            }
            else {
                cout << "Tam giac can, dien tich = " << fixed << setprecision(2) << square;
            }
        }
        else {
            cout << "Tam giac thuong, dien tich = " << fixed << setprecision(2) << square;
        }
    }
    return 0;
}