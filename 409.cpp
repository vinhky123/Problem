#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int arr[30];
    arr[0] = 1;
    arr[1] = 1;
    for (int i = 2; i <= 29; i++){
        arr[i] = arr[i-2] + arr[i-1];
    }
//----------------------
    int n;
    cin >> n;
    if ((n > 30) || (n < 1)){
        cout << "So " <<n << " khong nam trong khoang [1,30].";
    }
    else{
        cout << arr[n-1];
    }
    return 0;
}