#include <iostream>
using namespace std;

int reverse(int n){
    int m = 0;
    while (n != 0){
        m = m * 10 + n % 10;
        n = n / 10;
    }   
    return m;
}

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

void Nhap(int &a, int &b){
    cin >> a >> b;
}

void Xuat(int a, int b){
    int count = 0;
    bool c;
    if (a % 2 == 0){
        for (int i = a + 1; i <= b; i += 2){
            if ((check(i) == true)&&(check(reverse(i)) == true)){
                count += 1;
            }
        }
    cout << count;
    }
    else if (a % 2 != 0){
        for (int i = a; i <= b; i += 2){
            if ((check(i) == true)&&(check(reverse(i)) == true)){
                count += 1;
            }
        }
    cout << count;
    }
}

int main(){
    int a, b;
    Nhap(a,b);
    Xuat(a,b);
    return 0;
}