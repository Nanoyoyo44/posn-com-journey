#include <bits/stdc++.h>
using namespace std;

int dp[3001][3001];

int main(){
    string x,y;
    cin >> x >> y;
    int n=x.size(),m=y.size();
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if(x[i-1]==y[j-1]){
                dp[i][j]=dp[i-1][j-1]+1;
            }else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    // cout << dp[n][m];
    // for (int i = 0; i <= n; i++)
    // {
    //     for (int j = 0; j <=m ; j++)
    //     {
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << '\n';
    // }
    int i=n,j=m;
    string ans="";
    while (i&&j)
    {
        if(x[i-1]==y[j-1]){
            ans=x[i-1]+ans;
            i--;
            j--;
        }
        else{
            if(dp[i-1][j]>dp[i][j-1]){
                i--;
            }else{
                j--;
            }
        }
    }
    cout << ans;
    return 0;
}
/*
axyb
abyxb

axb
*/