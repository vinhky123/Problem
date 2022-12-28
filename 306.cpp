#include <iostream>
#include <math.h>
using namespace std;

int main(){
    unsigned int n,x;
    double s1,s2,s3 = 1;
    cin >> n;
    cin >> x;

    for (int i = 0; i <= n; i++){
        s1 += pow(x,i);
    }
    cout << s1 << endl;
//-------------------------------------------
    for (int i = 0; i <= n; i++){
        s2 += pow(x,i*2);
    }
    cout << s2 << endl;
//-------------------------------------------
    for (int i = 1; i <= n; i++){
        long long t = 1;
        for (int j = 1; j <= i; j++){
            t = t * j;
        }
        s3 += pow(x,i)/t;
    }
    cout << s3;
    return 0;
}