#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n;
    cin >> n;
    vector<int> arr(n+1);
    vector<vector<int>> dp(n+1,vector<int> (n+1,0));
    for (int i = 1; i <= n ; i++)
    {
        cin >> arr[i];
        dp[i][i]=arr[i];
    }

    for (int sz = 2; sz <= n; sz++)
    {
        for (int j = sz; j <= n; j++)
        {
            int i=j-sz+1;
            dp[i][j]=max(dp[i+1][j]+arr[i],dp[i][j-1]+arr[j])+abs(arr[i]-arr[j]);
        }
    }
    
    
    
    return 0;
}