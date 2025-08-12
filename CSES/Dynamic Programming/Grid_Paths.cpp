#include <bits/stdc++.h>
using namespace std;

const int mod=1e9+7;
int dp[1001][1001];
string grid[1001];

int main(){
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> grid[i];
    }
    dp[1][1]= grid[1][0]=='.' ? 1:0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(grid[i][j]=='*') continue;
            dp[i][j+1]=(dp[i-1][j+1]+dp[i][j]+dp[i][j+1])%mod;
        }
        
    }
    cout << dp[n][n];
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << '\n';
    // }
    


    return 0;
}
/*
4
....
.*..
...*
*...

3
*/