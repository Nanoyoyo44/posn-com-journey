#include <bits/stdc++.h>
using namespace std;

int dp[3001][3001];

int main(){
    string s,t;
    cin >> s >> t;
    int n=t.size(),a=s.size();
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=a; j++)
        {
            if(s[j-1]==t[i-1]){
                dp[i][j]=dp[i-1][j-1]+1;
            }else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    
    int x=n,y=a;
    string str;
    while (x&&y)
    {
        if(s[y-1]==t[x-1]){
            str+=s[y-1];
            y--;
            x--;
            continue;
        }
        if(dp[x-1][y]>dp[x][y-1]){
            x--;
        }else{
            y--;
        }
    }
    reverse(str.begin(),str.end());
    cout << str;
    return 0;
}