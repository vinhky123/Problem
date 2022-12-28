#include <iostream>
using namespace std;

float compare3(float a, float b, float c){
    if ((a >= b)&&(a >= c)){
        return a;
    }
    else if ((b >= a)&&(b >= c)){
        return b;
    }
    else if ((c >= a)&&(c >= b)){
        return c;
    }
}

bool compare2(float a, float b){
    if (a >= b){
        return true;
    }
    else {
        return false;
    }
}

int main(){
    float a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    if (compare3(a,b,c) == a){
        if (compare2(b,c) == true){
            cout << c <<" "<< b <<" "<< a;
        }
        else cout << b <<" "<< c <<" "<< a;
    }
    else if (compare3(a,b,c) == b){
        if (compare2(a,c) == true){
            cout << c <<" "<< a <<" "<< b;
        }
        else cout << a <<" "<< c <<" "<< b;
    }
    else if (compare3(a,b,c) == c){
        if (compare2(a,b) == true){
            cout << b <<" "<< a <<" "<< c;
        }
        else cout << a <<" "<< b <<" "<< c;
    }
    return 0;
}