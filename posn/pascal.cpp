#include <bits/stdc++.h>
using namespace std;

int dp[1001][1001];

int main(){
    int n;
    cin >> n ;
    dp[0][0]=1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            dp[i+1][j+1]+=dp[i][j];
            dp[i+1][j]+=dp[i][j];
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for(int l=0;l<n-i-1;l++) cout << ' ';
        for (int j = 0; j <= i; j++)
        {
            cout << dp[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}