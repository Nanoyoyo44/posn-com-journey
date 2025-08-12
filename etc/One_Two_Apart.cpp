#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long 

ull cnt=0;
ull dp[1000001][4];
const ull mod=1e8+7;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    ull n,result;
    cin >> n;
    dp[1][1]=dp[1][2]=dp[1][0]=1;
    for (ull i = 2; i <= n; i++)
    {
        dp[i][0]+=((dp[i-1][2]+dp[i-1][1])%mod+dp[i-1][0])%mod;
        dp[i][1]+=((dp[i-1][1]+dp[i-1][0])%mod-dp[i-2][2]+mod)%mod;
        dp[i][2]+=((dp[i-1][0]+dp[i-1][2])%mod-dp[i-2][1]+mod)%mod;
    }
    result =(dp[n][1]+dp[n][0]+dp[n][2])%mod;
    cout << result;
    // cout << result;
    return 0;
}