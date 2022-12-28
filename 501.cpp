#include <iostream>
using namespace std;
    
bool check(int n){
    if(n<2)
        return false;
    else{
        for (int i = 2; i < n; i++){
        if (n % i == 0){
            return false;
        }
    }
}
    return true;
}

int TongSoNguyenTo(int n){
    int sum = 0, j = 1;
    for (int i = 1; i <= 100000; i++){
        if (check(i) == true){
            sum += i;
            if (j == n ) break;
            j++;
        }
    }
    return sum;
}

int main(){
    int n;
    cin >> n;
    while ((n <= 0)||(n > 50)){
        cout << "Gia tri vua nhap la " << n << ", khong hop le. Vui long nhap lai." << endl;
        cin >> n;
    }
    cout << "Tong " << n << " so nguyen to dau tien la: " << TongSoNguyenTo(n);
    return 0;
}