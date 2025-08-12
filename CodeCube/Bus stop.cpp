#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a,long long b){
    if(a==0){
        return b;
    }
    return gcd(b%a,a);
}

int main(){
    long long d=1;
    int n;
    
    cin >> n;
    while (n--)
    {
        long long x;
        cin >> x;
        d=d*x/(gcd(d,x));
    }
    cout << d;
    return 0;
}