#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    unsigned long long n,b,a,result=1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        result=1;
        cin >> a >> b;
        while(b){
            if(b%2) result= (result*a)%(1000000000+7);
            a*=a;
            a%=(1000000000+7);
            b/=2;
        }
        cout << result << '\n';
    }
    
    return 0;
}