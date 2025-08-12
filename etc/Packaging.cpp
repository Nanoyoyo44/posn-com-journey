#include <bits/stdc++.h>
using namespace std;
#define int long long
int m, n, mod = 1e9 + 7, cnt = 0, dp[2001][2001];

/*
dp[top][height]
*/
int32_t main()
{
    cin.tie(nullptr)->sync_with_stdio(0);
    cin >> n >> m;// types height
    for (int i = 1; i <= n; i++)
        dp[1][i] = i;
    for (int i = 1; i <= m; i++)
        dp[i][1] = 1;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || j == 1)
            {
                cnt = (cnt + dp[i][j]) % mod;
                continue;
            }
            dp[i][j] = (dp[i - 1][j] + dp[i][j - 1] + dp[i - 1][j - 1]) % mod;
            cnt = (cnt + dp[i][j]) % mod;
        }
    }
    // for(int i= 1;i <= m; i++){
    //      for(int j = 1; j <= n; j++){
    //         cout << dp[i][j] << ' ';
    //     }
    //      cout << '\n';
    //  }
    cout << cnt;
}