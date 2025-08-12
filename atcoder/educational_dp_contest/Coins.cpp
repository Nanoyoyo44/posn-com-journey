#include <bits/stdc++.h>
using namespace std;

const int MX=3e3;
long double p[MX],dp[MX][MX],ans;

int main(){
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    
    dp[0][0]=1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            dp[i+1][j+1]+=dp[i][j]*p[i];
            dp[i+1][j]+=dp[i][j]*(1-p[i]);
        }
    }
    
    for (int i = (n+1)/2; i <= n; i++)
    {
        ans+=dp[n][i];
    }
    
    cout << fixed << setprecision(16) << ans;
    return 0;
}