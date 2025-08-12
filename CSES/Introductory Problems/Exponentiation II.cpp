#include <bits/stdc++.h>
using namespace std;

int modu=1e9+7;

long long modulo(long long a,long long b,long long mod){
    long long result =1;
    a%=mod;
    while(b){
        if(b%2) result=(result*a)%mod;
        b>>=1;
        a*=a;
        a%=mod;
    }
    return result;
}

int main(){
    int n;
    cin >> n;
    while (n--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        cout << modulo(a,modulo(b,c,modu-1),modu) << '\n';
    }
    return 0;
}