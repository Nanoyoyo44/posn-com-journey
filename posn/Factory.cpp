#include <bits/stdc++.h>
using namespace std;

int dp[1001];

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int a,n,compare=1e9,c,d;
    cin >> n >> a;
    dp[0]=a;
    for (int i = 1; i < n; i++)
    {
        cin >> a;
        dp[i]=dp[i-1]+a;
        // cout << dp[i] << " ";
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if(max(dp[j],max(dp[i]-dp[j],dp[n-1]-dp[i]))-min(dp[j],min(dp[i]-dp[j],dp[n-1]-dp[i]))<compare){
                c=j;
                d=i;
                compare=max(dp[j],max(dp[i]-dp[j],dp[n-1]-dp[i]))-min(dp[j],min(dp[i]-dp[j],dp[n-1]-dp[i]));
            }
        }
        
    }
    cout << c+2 <<" " << d+2;
    
    return 0;
}
// cout << dp[j] << " ,"<< dp[i]-dp[j] << " ,"<< dp[n-1]-dp[i] << "|" << i << " : "<< j<< "\n";
/*
5
3 2 5 -1 6

*/