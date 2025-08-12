#include <bits/stdc++.h>
using namespace std;

string str1,str2;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    cin >> str1 >> str2;
    int n=str1.size(),m=str2.size();
    int dp[n+1][m+1];
    memset(dp,0,sizeof dp);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if(str1[i-1]==str2[j-1]){
                dp[i][j]=dp[i-1][j-1]+1;
            }else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << dp[i+1][j+1] << " ";
    //     }
    //     cout << '\n';
        
    // }
    
    int y=n,x=m;
    string ans="";
    while (x&&y)
    {
        if(str1[y-1]==str2[x-1]){
            ans=ans+str1[y-1];
            x--;
            y--;
            continue;
        }
        if(dp[x-1][y]<=dp[x][y-1]){
            x--;
        }else{
            y--;
        }

    }
    reverse(ans.begin(),ans.end());
    cout << ans;
    return 0;
}
/*
AAAACTGCTACCGGT
CTGAATCTACTGCTATTGCAA
*/