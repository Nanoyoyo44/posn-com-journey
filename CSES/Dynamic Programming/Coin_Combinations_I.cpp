#include <bits/stdc++.h>
using namespace std;

const int mod=1e9+7;

int main(){
    int n,x;
    cin >> n >> x;
    vector<int> dp(x+1,0),coin(n);
    for (int i = 0; i < n; i++)
    {
        cin >> coin[i];
    }
    dp[0]=1;
    for (int i = 1; i <= x; i++)
    {
        for(auto j:coin){
            if(i>=j){
                dp[i]=(dp[i]+dp[i-j])%mod;
            }
        }
    }

    cout << dp[x];
    
    return 0;
}