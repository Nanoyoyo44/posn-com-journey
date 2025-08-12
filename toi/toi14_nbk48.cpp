#include <bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int a,n,q;
    cin >> n >> q;
    vector<pair<int,int>> dp(n+1);
    dp[0]=make_pair(0,0);
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        dp[i].first=a+dp[i-1].first;
        dp[i].second=i;
    }
    sort(dp.begin(),dp.end());
    for (int i = 1; i <= n; i++)    
    {
        dp[i].second=max(dp[i].second,dp[i-1].second);
    }
    while (q--)
    {
        int budget ;
        cin >> budget;
        int itr=upper_bound(dp.begin(),dp.end(),make_pair(budget,INT_MAX))-dp.begin()-1;
        cout << dp[itr].second << '\n';
    }
    return 0;
}