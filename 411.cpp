#include <iostream>
using namespace std;

std::ostream& bold_on(std::ostream& os)
{
    return os << "\e[1m";
}

std::ostream& bold_off(std::ostream& os)
{
    return os << "\e[0m";
}

int Case2(int n){
    if (n % 2 == 1){
        n = n - 1;
    }
    return n/2 + 1;
}

int Case5(int n){
    int sum = 0;
    do{
        n -= 5;
        sum += Case2(n);
    }
    while (n / 5 != 0);   
    return sum;
}

int main(){
    int n;
    cin >> n;
    n = n / 1000;
    cout << "Co tat ca " <<Case2(n) + Case5(n)<< " to hop!";
    return 0;
}
