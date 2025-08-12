#include <bits/stdc++.h>
using namespace std;

const int mod=1e9+7;

int main(){
    int n,x;
    cin >> n >> x;
    vector<int> coin(n),dp(x+1);
    for (int i = 0; i < n; i++)
    {
        cin >> coin[i];
    }
    
    dp[0]=1;
    for(auto j:coin){
        for (int i = j; i <= x; i++)
        {
            dp[i]=(dp[i]+dp[i-j])%mod;
        }
        
    }
    cout << dp[x];

    return 0;
}