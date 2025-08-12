#include<bits/stdc++.h>
using namespace std;

const int m=1e5+1;
int dp[m],curr[m],n;

int main(){
    cin >> n >> curr[0];
    for (int i = 1; i < n; i++)
    {
        cin >> curr[i];
        dp[i]=dp[i-1]+abs(curr[i-1]-curr[i]);
        if(i>=2)dp[i]=min(dp[i],dp[i-2]+abs(curr[i]-curr[i-2]));
    }
    cout << dp[n-1];
    return 0;
}