#include <bits/stdc++.h>
using namespace std;

double sn(double a1,int n,double r){
    return (a1-a1*(pow(r,n)))/(1-r);
}

int main(){
    double sum=1;
    double a1=2;
    double r=3;
    int n;
    // cout << sn(a1,n,r);
    for (int i = 0; i <= 99 ; i++)
    {
        sum*=-(0.5,i);
    }
    cout << sum;
    return 0;
}