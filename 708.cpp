#include <iostream>
using namespace std;
typedef double arr[100][100];

bool Check1(arr a, int m , int n) //check điều kiện 1
{
    bool check = true;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            if (i = j) if (a[i][j] != 1.0) check = false;
        }
    }
    return check;
}

bool Check2(arr a, int m, int n) //check điều kiện 2
{
    int count = 0, tempm, tempn;
    bool check = true;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++)
        {
            if (i == j) continue;
            else
            {
                if ((a[i][j] != 0)&&(count == 0))
                {
                    tempm = i;
                    tempn = j;
                    count++;
                }
                else if ((a[i][j] != 0)&&(count >= 1))
                {
                    if (j != tempn) check = false;
                }
            }
        }
    }
    return check;
}

int main(){
    int n,m;
    double a[100][100];
    cin >> m >> n;
//---------------------- Nhap Mang
    for (int i = 0; i < m; i++ ){
        for (int j = 0; j < n; j++ ){
            cin >> a[i][j];
        }
    }
    if ((Check1(a,m,n) == true)&&(Check2(a,m,n) == true)) cout << "Yes";
    else cout << "No";
    return 0;
}