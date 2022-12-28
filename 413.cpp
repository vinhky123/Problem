#include <iostream>
using namespace std;

int main(){
    int n;
    int j = 0;
    cin >> n;
    int NhiPhan[100];
    do{
        NhiPhan[j] = n % 2;
        j += 1;
        n = n / 2;
    }
    while (n != 0);
    for (int i = j - 1; i >= 0; i--){
    cout << NhiPhan[i];
    }
    return 0;
}
