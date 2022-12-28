#include<iostream>
using namespace std;
void nhap(int &n)
{
    cin>>n;
}
int xuly(int n)
{
    int t=0;
    while(n>0)
    {
        t=t+n%10;
        n=n/10;
    }
    return t;
}
void xuat(int kq){
    cout<<kq;
}
int main()
{
    int n,kq;
    nhap(n);
    kq=xuly(n);
    xuat(kq);
    return 0;
}