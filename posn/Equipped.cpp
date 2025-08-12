#include <bits/stdc++.h>
using namespace std;

const int MM=2<<8;
int dp[MM+1];

int main(){
    memset(dp,0x3f,sizeof dp);
    int n,k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        int w,list=0;
        cin >> w;
        for (int j = 0; j < k; j++)
        {
            int t;
            cin >> t;
            if(!t) continue;
            list|=(1<<j);
        }
        dp[list]=min(dp[list],w);
    }
    
    for (int j = 1; j < 1<<k; j++)
    {
        for (int i = 1; i < 1<<k; i++)
        {
            dp[i|j]=min(dp[i|j],dp[i]+dp[j]);
        }
    }
    
    cout << dp[(1<<k) -1];
    return 0;
}