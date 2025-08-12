#include <bits/stdc++.h>
using namespace std;

int dp[100001][3],c[100001][3];

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> c[i][j];
        }
    }
    
    for (int i = 0; i < 3; i++)
    {
        dp[0][i]=c[0][i];
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int mx=INT_MIN;
            for (int k = 0; k < 3; k++)
            {
                if(j!=k){
                    mx=max(mx,dp[i-1][k]);
                }
            }
            dp[i][j]=mx+c[i][j];
        }   
    }
    
    cout << max({dp[n-1][0],dp[n-1][1],dp[n-1][2]});
    return 0;
}