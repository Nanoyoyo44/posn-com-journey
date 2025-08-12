#include <bits/stdc++.h>
using namespace std;

int dp[1001][1001];

int main(){
    int m,n,ans=-1e9,k;
    ios::sync_with_stdio(0);cin.tie(0);
    cin >> m >> n >> k;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int a;
            cin >> a;
            dp[i][j]=a+dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1];
        }
    }

    for (int i = 1+k; i <= m; i++)
    {
        for (int j = 1+k; j <= n; j++)
        {
            ans=max(ans,dp[i][j]-dp[i-k][j]-dp[i][j-k]+dp[i-k][j-k]);
        }
    }
    cout << ans;
    return 0;
}

/*

6 4
3
7 8 5 1
0 3 5 2
3 3 2 9
9 7 8 9
4 3 5 9
8 6 5 2 
*/