#include <bits/stdc++.h>
using namespace std;

unsigned long long dp[60][60];
int n,m,o;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    memset(dp,0,sizeof dp);
    cin >> n >> m >> o;
    for (int i = 0; i < o; i++)
    {
        int y,x;
        cin >> y >> x;
        dp[y][x]=-1;
    }
    dp[1][1]=1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if(dp[i][j]==-1) continue;
            if(dp[i-1][j]!=-1) dp[i][j]+=dp[i-1][j];
            if(dp[i][j-1]!=-1) dp[i][j]+=dp[i][j-1];
        }
    }
    // for (int i = 0; i <=n; i++)
    // {
    //     for (int j = 0; j <= m; j++)
    //     {
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << '\n';
    // }
    
    cout << dp[n][m];
    return 0;
}
/*
5 4
3
2 2
2 3
4 2 
*/