#include <iostream>
using namespace std;

int main(){
    int day, month, year, maxday;
    bool nhuan;
    cin >> day >> month >> year;
    if(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)){
        nhuan = true;
    }
    if ((month == 1)||(month == 3)||(month == 5)||(month == 7)||(month == 8)||(month == 10)||(month == 12)){
        maxday = 31;
    }
    else if ((month == 2)&&(nhuan == 1)){
        maxday = 29;
    }
    else if ((month == 2)&&(nhuan == 0)){
        maxday = 28;
    }
    else if ((month == 4)||(month == 6)||(month == 9)||(month == 11)) maxday = 30;
    if ((day <= maxday)&&(day >= 1)&&(month >= 1)&&(month <= 12)&&(year > 0)){
        cout << "Valid date!";
    }
    else cout << "Invalid date!";
    return 0;
}