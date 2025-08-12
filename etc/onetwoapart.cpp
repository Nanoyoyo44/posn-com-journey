#include <bits/stdc++.h>
using namespace std;
#define int  long long
int mod = 1e8 + 7;
//vector<vector<int>> dp(1e6+1,vector<int>(3));
int dp[1000001][3];// [size of str]  [last element]
int32_t main(){
    cin.tie(nullptr)->sync_with_stdio(0);
    int n; cin >> n;
    dp[1][1] = 1; dp[1][0] = 1; dp[1][2] = 1;
    for(int i = 2; i <= n; i++){
        dp[i][0] = ((dp[i-1][0] + dp[i-1][1])%mod + dp[i-1][2] + mod)%mod;
        dp[i][1] =  ((dp[i-1][0]+ dp[i-1][1])%mod-dp[i-2][2] + mod)%mod;
        dp[i][2] = ((dp[i-1][0] + dp[i-1][2])%mod-dp[i-2][1] + mod)%mod;
    }
   // cout << dp[n][0] << ' ' << dp[n][1] << ' ' << dp[n][2] << '\n';
    cout << ((dp[n][0] + dp[n][1])%mod+ dp[n][2]%mod)%mod;
}