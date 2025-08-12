#include <bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long n,result=1,a=2;
    cin >> n;
    while(n){
        if(n%2) result = (result*a)%(1000000000+7);
        a*=a;
        a%=(1000000000+7);
        n/=2;
    }
    cout << result;
    return 0;
}