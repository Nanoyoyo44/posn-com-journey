#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long

ull total;
ull dp[1000001];
ull const mod = 1573153713573157173;

ull re(int n){
    if(n<0) return 0;
    if(n==0) return 1;

    if(dp[n]!=-1) return dp[n];
    dp[n]=(re(n-1)+re(n-2)+re(n-3)+re(n-4)+re(n-5))%mod;

    return dp[n];
}

void solve(){
    int n;
    cin >> n;
    total=0;
    cout << re(n) << '\n';
}

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    memset(dp,-1,sizeof dp);
    int q;
    cin >> q;
    while (q--)
    {
        solve();
    }

    return 0;
}