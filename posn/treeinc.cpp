#include <bits/stdc++.h>
using namespace std;

vector<int> town[300001];
int dp[300001],ans;

int cdp(int s){
    if(!dp[s]){
        for(auto i:town[s])
            dp[s]=max(dp[s],dp[i]);
        dp[s]++;
    }
    return dp[s];
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n-1; i++)
    {
        int u,v;
        cin >> u >> v;
        if(v>u) swap(u,v);
        town[u].push_back(v);
    }
    for (int i = 1; i <=n; i++)
    {
        ans=max(ans,cdp(i));
    }
    cout << ans;

    return 0;
}