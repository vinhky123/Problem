#include <iostream>
#include <math.h>
using namespace std;

int main(){
    unsigned int n;
    long long s1;
    double s2, s3;
    cin >> n;
    if (n >= 1){
    s1 = 0;
    s2 = 0;
    s3 = 0;

    for (int i = 1; i <=n; i++){
        long long t = 1;
        for (int j = 1; j <= i; j++){
            t = t * i;
        }
        s1 += t;
    }
//----------------------------------------------------------
    for (int i = 1; i <= n; i++){
        unsigned int t = 1;
        for (int j = 1; j <= i; j++){
            t = t * j;
        }
        s2 += t;
    }
//---------------------------------------------------------
    for (int i = 1; i <= n; i++){
        unsigned int t = 0;
        for (int j = 1; j <= i; j++){
            t += j;
        }
    s3 += (static_cast<float>(1)/static_cast<float>(t));
    }

    cout << double(s1) << endl;
    cout << s2 << endl;
    cout << s3;
}
    return 0;
}
