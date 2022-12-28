 #include<stdio.h>
#include <iostream>
using namespace std;
 
int main(){
    int num,r,sum=0,temp;
     cin >> num;
 
    for(temp=num;num!=0;num=num/10){
         r=num%10;
         sum=sum*10+r;
    }
    if(temp==sum)
         cout << "true";
    else
         cout << "false";
 
    return 0;
}