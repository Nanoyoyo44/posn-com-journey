#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> dp(n+1,1e9);
    dp[0]=0;
    for (int i = 1; i <= n; i++)
    {
        int tmp=i;
        while (tmp>0)
        {
            int j=tmp%10;
            tmp/=10;
            dp[i]=min(dp[i],dp[i-j]+1);
        }
    }
    cout << dp[n];
    
    return 0;
}