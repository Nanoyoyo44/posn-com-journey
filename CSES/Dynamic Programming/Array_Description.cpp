#include <bits/stdc++.h>
using namespace std;

const int mod=1e9+7;
int x[100001];
int dp[100001][101];

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n,m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    if(x[0]==0){
        for (int v = 1; v <= m; v++)
        {
            dp[0][v]=1;
        }
    }else{
        dp[0][x[0]]=1;
    }
    
    for (int i = 1; i < n; i++)
    {
        if(x[i]==0){
            for (int v = 1; v <= m; v++)
            {
                if(v-1>=1)dp[i][v]=(dp[i][v]+dp[i-1][v-1])%mod;
                dp[i][v]=(dp[i][v]+dp[i-1][v])%mod;
                if(v+1<=m)dp[i][v]=(dp[i][v]+dp[i-1][v+1])%mod;
            }
            
        }else{
            int v=x[i];
            if(v-1>=1)dp[i][v]=(dp[i][v]+dp[i-1][v-1])%mod;
            dp[i][v]=(dp[i][v]+dp[i-1][v])%mod;
            if(v+1<=m)dp[i][v]=(dp[i][v]+dp[i-1][v+1])%mod;
        }
    }
    
    int result=0;
    for (int i = 1; i <= m; i++)
    {
        result=(result+dp[n-1][i])%mod;
    }
    cout << result;
    return 0;
}