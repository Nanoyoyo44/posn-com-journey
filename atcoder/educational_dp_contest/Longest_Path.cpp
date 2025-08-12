#include <bits/stdc++.h>
using namespace std;

const int MX=1e5+1;
int dp[MX];
vector<int> adj[MX];
int mx=-1e9;

int cdp(int n){
    if(!dp[n]){
        for(auto i:adj[n]){
            dp[n]=max(cdp(i),dp[n]);
        }
    dp[n]++;
    }
    return dp[n];
}

int main(){
    int n,m,u,v;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> u >> v;
        adj[u].push_back(v);
    }
    for (int i = 1; i <=n; i++)
    {
        mx=max(cdp(i),mx);
    }
    
    cout << mx-1;
    return 0;
}