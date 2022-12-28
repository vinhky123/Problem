#include <iostream>
using namespace std;
int modulo(int m, int n){
    while (n <= m ){
    m = m - n;
}
return m;

}


int main (){
    int m, n; cin >> m >> n;
	cout << modulo(m, n);
}